##
## model 7:
##     Extended dixon and Simon
##
##     theta_g ~ N(theta, sigma^2)
##     theta = b0+b1X1+..+bpXp+c1X1X2+..+cX1Xp+..+zX1X2...Xp
##        a ~ N(0,1000)
##        b ~ N(0, omega[1]^2)
##        c ~ N(0, omega[2]^2)
##             ...
##     omega^2 ~ HalfN(0,1)

data {
    int<lower=0> SIZE;
    int<lower=0> NX;
    int<lower=0> NTAU;

    vector[SIZE] Y;
    vector[SIZE] VY;
    matrix[SIZE, NX] X;
    int<lower=0> TAUINX[NX];

    real<lower=0> VTAU;
    real<lower=0> VW;
	real VRANGE[2];
}

parameters {
    vector[NX] beta;
    real b0;
    real<lower=0> omega[NTAU];
	real<lower=0, upper=1> uvs[SIZE];
}

transformed parameters{
	real<lower=0> vs[SIZE];
	vector[2] range;

	for (i in 1:SIZE) {
		range[1] <- log(VY[i]) + VRANGE[1];
		range[2] <- log(VY[i]) + VRANGE[2];
		vs[i]    <- exp(range[1] + uvs[i]*(range[2] - range[1]));
	}
}

model {
    omega ~ normal(0, sqrt(VW));
    b0    ~ normal(0, sqrt(VTAU));
	uvs ~ uniform(0,1);

    for (i in 1:NX) {
		beta[i] ~ normal(0, sqrt(omega[TAUINX[i]]));
    }
    for (i in 1:SIZE) {
		Y[i] ~ normal(b0+X[i]*beta, sqrt(vs[i]));
    }
}

generated quantities {
	real mu[SIZE];
	for (i in 1:SIZE) {
		mu[i] <- b0+X[i]*beta;
	}
}

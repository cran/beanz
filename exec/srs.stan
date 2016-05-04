##
## model 5:
##    simple shrinkage+regression
##
##     theta_g  ~ N(tau, sigma^2)
##          tau = b0+b1X1+..+bpXp+phi_g
##     phi_g ~ N(0, omega^2)
##       beta~ N(0,1000)
##     tau^2 ~ HalfN(0,1)

data {
	int<lower=0> SIZE;
	int<lower=0> NX;
	vector[SIZE] Y;
	vector[SIZE] VY;
	matrix[SIZE, NX] X;
	real<lower=0> VTAU;
	real<lower=0> VW;
	real<lower=0> VGAMMA;
	real VRANGE[2];
}

parameters {
    vector[SIZE] phi;
    real<lower=0> omega;
    real b0;
    vector[NX] bgamma;
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
    phi     ~ normal(0, sqrt(omega));
    omega   ~ normal(0, sqrt(VW));
    b0      ~ normal(0, sqrt(VTAU));
    bgamma  ~ normal(0, sqrt(VGAMMA));
	uvs ~ uniform(0,1);

for (i in 1:SIZE) {
		Y[i] ~ normal(b0+X[i]*bgamma+phi[i], sqrt(vs[i]));
    }
}

generated quantities {
	real mu[SIZE];
	for (i in 1:SIZE) {
		mu[i] <- b0+X[i]*bgamma+phi[i];
	}
}

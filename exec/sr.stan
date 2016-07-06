##
## model 3:
##    simple regression
##
##     theta_g ~ N(tau, sigma^2)
##         tau = b0+b1*X1+..+bp*Xp
##          b  ~ N(0, 10^3)
##

data {
	int<lower=0> SIZE;
	int<lower=0> NX;
	vector[SIZE] Y;
	vector[SIZE] VY;
	matrix[SIZE, NX] X;
	real<lower=0> VTAU;
	real<lower=0> VGAMMA;
	real VRANGE[2];
}


parameters {
	real b0;
	vector[NX] bgamma;
	real<lower=0, upper=1> uvs[SIZE];
}

transformed parameters{
	real<lower=0> vs[SIZE];
	vector[2] range;

	for (i in 1:SIZE) {
		range[1] = log(VY[i]) + VRANGE[1];
		range[2] = log(VY[i]) + VRANGE[2];
		vs[i]    = exp(range[1] + uvs[i]*(range[2] - range[1]));
		vs[i]    = sqrt(vs[i]);
	}
}

model {
	b0     ~ normal(0, sqrt(VTAU));
	bgamma ~ normal(0, sqrt(VGAMMA));
	uvs    ~ uniform(0,1);
	Y      ~ normal(b0+X*bgamma, vs);
}

generated quantities {
	real mu[SIZE];
	for (i in 1:SIZE) {
		mu[i] = b0+X[i]*bgamma;
	}
}

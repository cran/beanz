##
## model 4:
##    simple shrinkage
##
##     theta_g ~ N(b+phi_g, sigma^2)
##     phi_g ~ N(0, omega^2)
##     omega^2 ~ N(0,1)

data {
	int<lower=0> SIZE;
	vector[SIZE] Y;
	vector[SIZE] VY;
	real<lower=0> VTAU;
	real<lower=0> VW;
	real VRANGE[2];
}

parameters {
    vector[SIZE] phi;
    real b0;
    real<lower=0> omega;
	real<lower=0, upper=1> uvs[SIZE];
}


transformed parameters{
	real<lower=0> vs[SIZE];
	vector[2] range;

	for (i in 1:SIZE) {
		range[1] = log(VY[i]) + VRANGE[1];
		range[2] = log(VY[i]) + VRANGE[2];
		vs[i]    = exp(range[1] + uvs[i]*(range[2] - range[1]));
	}
}

model {
    b0    ~ normal(0, sqrt(VTAU));
    phi   ~ normal(0, sqrt(omega));
    omega ~ normal(0, sqrt(VW));
	uvs ~ uniform(0,1);
    for (i in 1:SIZE) {
		Y[i] ~ normal(b0+phi[i], sqrt(vs[i]));
    }
}

generated quantities {
	real mu[SIZE];
	for (i in 1:SIZE) {
		mu[i] = b0+phi[i];
	}
}

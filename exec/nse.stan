##
## model 1:
##    no subgroup effect
##
##      thetag ~ N(mu, sigma^2)
##      mu ~ N(0, 10^3)
##

data {
	int<lower=0>  SIZE;
	real Y[SIZE];
	real VY[SIZE];
	real<lower=0> VTAU;
	real VRANGE[2];
}

parameters {
	real tau;
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
	tau ~ normal(0, sqrt(VTAU));
	uvs ~ uniform(0,1);
	for (i in 1:SIZE) {
		Y[i]  ~ normal(tau, sqrt(vs[i]));
	}
}

generated quantities {
  real mu[SIZE];
  for (i in 1:SIZE) {
    mu[i] <- tau;
  }
}

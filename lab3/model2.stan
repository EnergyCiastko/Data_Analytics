data {
  int<lower=0> N;
  int<lower=0, upper=N> y;
}

parameters {
  real<lower=0, upper=1> p;
}

model {
  y ~ binomial(N, p);
  p ~ beta(2, 5);
}

generated quantities {
  int y_pred;
  y_pred = binomial_rng(N, p);
}
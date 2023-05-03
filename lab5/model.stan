data {
  int<lower=0> N;
  int<lower=0> y[N];
  vector<lower=0>[N] n;
}

parameters {
  real alpha;
  real theta;
}

model {
  alpha ~ normal(0, 5);
  theta ~ normal(0, 5);
  for (i in 1:N)
    y[i] ~ poisson_log(alpha + theta * log(n[i]));
}

generated quantities {
  real lambda[N];
  for (i in 1:N)
    lambda[i] = exp(alpha + theta * log(n[i]));
}
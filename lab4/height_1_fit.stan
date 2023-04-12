data {
  int<lower=0> N; // number of observations
  real heights[N]; // observed heights
}

parameters {
  real mu; // population mean height
  real<lower=0> sigma; // population standard deviation of height
}

model {
  mu ~ normal(175, 10); // Prior for mean height
  sigma ~ normal(10, 5); // Prior for standard deviation of height
  
  // Likelihood
  heights ~ normal(mu, sigma); // Normal likelihood with mean height and standard deviation
  
}

generated quantities {
  real height_sample; //observed heights
  
  height_sample = normal_rng(mu, sigma); // sample height from normal distribution
}


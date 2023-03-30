data {
    int<lower=1> N; 
}

parameters {
    real y[N]; //Probabilistic variables y
    real theta; // Probabilistic variable theta 
}

model {
    // condistional probability density fo the ys
    //given theta 
    y ~ normal(theta, 1);
    // prior probibilty density for theta
    theta ~ normal(0,1);
}
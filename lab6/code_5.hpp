
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace code_5_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 23> locations_array__ = 
{" (found before start of program)",
 " (in '/home/lab6/code_5.stan', line 10, column 4 to column 24)",
 " (in '/home/lab6/code_5.stan', line 11, column 4 to column 20)",
 " (in '/home/lab6/code_5.stan', line 16, column 4 to column 18)",
 " (in '/home/lab6/code_5.stan', line 17, column 4 to column 15)",
 " (in '/home/lab6/code_5.stan', line 27, column 3 to column 21)",
 " (in '/home/lab6/code_5.stan', line 28, column 3 to column 23)",
 " (in '/home/lab6/code_5.stan', line 30, column 4 to column 50)",
 " (in '/home/lab6/code_5.stan', line 31, column 4 to column 39)",
 " (in '/home/lab6/code_5.stan', line 29, column 18 to line 32, column 4)",
 " (in '/home/lab6/code_5.stan', line 29, column 3 to line 32, column 4)",
 " (in '/home/lab6/code_5.stan', line 22, column 4 to column 25)",
 " (in '/home/lab6/code_5.stan', line 2, column 4 to column 10)",
 " (in '/home/lab6/code_5.stan', line 3, column 4 to column 10)",
 " (in '/home/lab6/code_5.stan', line 4, column 11 to column 12)",
 " (in '/home/lab6/code_5.stan', line 4, column 4 to column 21)",
 " (in '/home/lab6/code_5.stan', line 5, column 11 to column 12)",
 " (in '/home/lab6/code_5.stan', line 5, column 13 to column 14)",
 " (in '/home/lab6/code_5.stan', line 5, column 4 to column 18)",
 " (in '/home/lab6/code_5.stan', line 11, column 11 to column 12)",
 " (in '/home/lab6/code_5.stan', line 16, column 12 to column 13)",
 " (in '/home/lab6/code_5.stan', line 27, column 10 to column 11)",
 " (in '/home/lab6/code_5.stan', line 28, column 9 to column 10)"};




class code_5_model final : public model_base_crtp<code_5_model> {

 private:
  int N;
  int K;
  std::vector<double> y;
  Eigen::Matrix<double, -1, -1> X__; 
  Eigen::Map<Eigen::Matrix<double, -1, -1>> X{nullptr, 0, 0};
 
 public:
  ~code_5_model() { }
  
  inline std::string model_name() const final { return "code_5_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  code_5_model(stan::io::var_context& context__,
               unsigned int random_seed__ = 0,
               std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "code_5_model_namespace::code_5_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 12;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 12;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 13;
      context__.validate_dims("data initialization","K","int",
           std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      
      
      current_statement__ = 13;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 14;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 15;
      context__.validate_dims("data initialization","y","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      y = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 15;
      y = context__.vals_r("y");
      current_statement__ = 16;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 17;
      stan::math::validate_non_negative_index("X", "K", K);
      current_statement__ = 18;
      context__.validate_dims("data initialization","X","double",
           std::vector<size_t>{static_cast<size_t>(N),
            static_cast<size_t>(K)});
      X__ = 
        Eigen::Matrix<double, -1, -1>::Constant(N, K,
          std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double, -1, -1>>(X__.data(), N, K);
      
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 18;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 18;
        pos__ = 1;
        current_statement__ = 18;
        for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
          current_statement__ = 18;
          for (int sym2__ = 1; sym2__ <= N; ++sym2__) {
            current_statement__ = 18;
            stan::model::assign(X, X_flat__[(pos__ - 1)],
              "assigning variable X", stan::model::index_uni(sym2__),
                                        stan::model::index_uni(sym1__));
            current_statement__ = 18;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 19;
      stan::math::validate_non_negative_index("beta", "K", K);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("mu", "N", N);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("log_lik", "N", N);
      current_statement__ = 22;
      stan::math::validate_non_negative_index("y_hat", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + K;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "code_5_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 1;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(K, DUMMY_VAR__);
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__, -1, 1>>(K);
      Eigen::Matrix<local_scalar_t__, -1, 1> mu =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N, DUMMY_VAR__);
      current_statement__ = 4;
      stan::model::assign(mu, stan::math::multiply(X, beta),
        "assigning variable mu");
      {
        current_statement__ = 11;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(y, mu, sigma));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "code_5_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      Eigen::Matrix<double, -1, 1> beta =
         Eigen::Matrix<double, -1, 1>::Constant(K,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__, -1, 1>>(K);
      Eigen::Matrix<double, -1, 1> mu =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(sigma);
      out__.write(beta);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 4;
      stan::model::assign(mu, stan::math::multiply(X, beta),
        "assigning variable mu");
      if (emit_transformed_parameters__) {
        out__.write(mu);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> log_lik =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      std::vector<double> y_hat =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 10;
      for (int j = 1; j <= N; ++j) {
        current_statement__ = 7;
        stan::model::assign(log_lik,
          stan::math::normal_lpdf<false>(
            stan::model::rvalue(y, "y", stan::model::index_uni(j)),
            stan::model::rvalue(mu, "mu", stan::model::index_uni(j)), sigma),
          "assigning variable log_lik", stan::model::index_uni(j));
        current_statement__ = 8;
        stan::model::assign(y_hat,
          stan::math::normal_rng(
            stan::model::rvalue(mu, "mu", stan::model::index_uni(j)), sigma,
            base_rng__),
          "assigning variable y_hat", stan::model::index_uni(j));
      }
      out__.write(log_lik);
      out__.write(y_hat);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(K, DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
        stan::model::assign(beta, in__.read<local_scalar_t__>(),
          "assigning variable beta", stan::model::index_uni(sym1__));
      }
      out__.write(beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"sigma", "beta", "mu", "log_lik",
      "y_hat"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(K)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "sigma");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "sigma");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta" + '.' + std::to_string(sym1__));
      } 
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + K);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  (1 + K);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 2> names__{"sigma", "beta"};
      const std::array<Eigen::Index, 2> constrain_param_sizes__{1, K};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = code_5_model_namespace::code_5_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return code_5_model_namespace::profiles__;
}

#endif



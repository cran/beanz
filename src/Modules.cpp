#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4bs_mod) {


    class_<rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> >("model_bs")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_bs_namespace::model_bs, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4ds_mod) {


    class_<rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> >("model_ds")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_ds_namespace::model_ds, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4eds_mod) {


    class_<rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> >("model_eds")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_eds_namespace::model_eds, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4fs_mod) {


    class_<rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> >("model_fs")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_fs_namespace::model_fs, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4nse_mod) {


    class_<rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> >("model_nse")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_nse_namespace::model_nse, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4sr_mod) {


    class_<rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> >("model_sr")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_sr_namespace::model_sr, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}
#include <Rcpp.h>
using namespace Rcpp ;
#include "include/models.hpp"

RCPP_MODULE(stan_fit4srs_mod) {


    class_<rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> >("model_srs")

    .constructor<SEXP,SEXP>()


    .method("call_sampler", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::call_sampler)
    .method("param_names", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_names)
    .method("param_names_oi", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_names_oi)
    .method("param_fnames_oi", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_fnames_oi)
    .method("param_dims", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_dims)
    .method("param_dims_oi", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_dims_oi)
    .method("update_param_oi", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::update_param_oi)
    .method("param_oi_tidx", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::param_oi_tidx)
    .method("grad_log_prob", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::grad_log_prob)
    .method("log_prob", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::log_prob)
    .method("unconstrain_pars", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::unconstrain_pars)
    .method("constrain_pars", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::constrain_pars)
    .method("num_pars_unconstrained", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::num_pars_unconstrained)
    .method("unconstrained_param_names", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::unconstrained_param_names)
    .method("constrained_param_names", &rstan::stan_fit<model_srs_namespace::model_srs, boost::random::ecuyer1988> ::constrained_param_names)
    ;
}

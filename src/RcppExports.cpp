// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif


RcppExport SEXP _rcpp_module_boot_stan_fit4bs_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4ds_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4eds_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4fs_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4nse_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4sr_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4srs_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_stan_fit4bs_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4bs_mod, 0},
    {"_rcpp_module_boot_stan_fit4ds_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4ds_mod, 0},
    {"_rcpp_module_boot_stan_fit4eds_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4eds_mod, 0},
    {"_rcpp_module_boot_stan_fit4fs_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4fs_mod, 0},
    {"_rcpp_module_boot_stan_fit4nse_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4nse_mod, 0},
    {"_rcpp_module_boot_stan_fit4sr_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4sr_mod, 0},
    {"_rcpp_module_boot_stan_fit4srs_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4srs_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_beanz(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

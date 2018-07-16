// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/hesim.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// incr_effectC
std::vector<double> incr_effectC(std::vector<double> x, std::vector<double> y, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_incr_effectC(SEXP xSEXP, SEXP ySEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(incr_effectC(x, y, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// ceacC
std::vector<double> ceacC(std::vector<double> k, std::vector<double> ie, std::vector<double> ic, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_ceacC(SEXP kSEXP, SEXP ieSEXP, SEXP icSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ie(ieSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ic(icSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(ceacC(k, ie, ic, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// mceC
std::vector<double> mceC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_mceC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(mceC(k, e, c, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// VstarC
std::vector<double> VstarC(std::vector<double> k, std::vector<double> e, std::vector<double> c, int nsims, int nstrategies, int ngrps);
RcppExport SEXP _hesim_VstarC(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP nsimsSEXP, SEXP nstrategiesSEXP, SEXP ngrpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< int >::type nstrategies(nstrategiesSEXP);
    Rcpp::traits::input_parameter< int >::type ngrps(ngrpsSEXP);
    rcpp_result_gen = Rcpp::wrap(VstarC(k, e, c, nsims, nstrategies, ngrps));
    return rcpp_result_gen;
END_RCPP
}
// qgompertz
double qgompertz(double p, double shape, double rate);
static SEXP _hesim_qgompertz_try(SEXP pSEXP, SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(qgompertz(p, shape, rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_qgompertz(SEXP pSEXP, SEXP shapeSEXP, SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_qgompertz_try(pSEXP, shapeSEXP, rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgompertz
/** * Random number generation from Gompertz distribution * with the same paramerization in R stats.  * @param shape The shape parameter. * @param rate The rate parameter. * @return A random sample from the Gompertz distribution. */ double rgompertz(double shape, double rate);
static SEXP _hesim_rgompertz_try(SEXP shapeSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(rgompertz(shape, rate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgompertz(SEXP shapeSEXP, SEXP rateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgompertz_try(shapeSEXP, rateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// qllogis
double qllogis(double p, double shape, double scale, int lt, int lg);
static SEXP _hesim_qllogis_try(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP ltSEXP, SEXP lgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< int >::type lt(ltSEXP);
    Rcpp::traits::input_parameter< int >::type lg(lgSEXP);
    rcpp_result_gen = Rcpp::wrap(qllogis(p, shape, scale, lt, lg));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_qllogis(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP ltSEXP, SEXP lgSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_qllogis_try(pSEXP, shapeSEXP, scaleSEXP, ltSEXP, lgSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rllogis
double rllogis(double shape, double scale);
static SEXP _hesim_rllogis_try(SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rllogis(shape, scale));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rllogis(SEXP shapeSEXP, SEXP scaleSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rllogis_try(shapeSEXP, scaleSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgengamma
double rgengamma(double mu, double sigma, double Q);
static SEXP _hesim_rgengamma_try(SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rgengamma(mu, sigma, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgengamma(SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgengamma_try(muSEXP, sigmaSEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rgengamma_vec
std::vector<double> rgengamma_vec(int n, std::vector<double> mu, std::vector<double> sigma, std::vector<double> Q);
static SEXP _hesim_rgengamma_vec_try(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mu(muSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(rgengamma_vec(n, mu, sigma, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rgengamma_vec(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rgengamma_vec_try(nSEXP, muSEXP, sigmaSEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rtruncnorm
double rtruncnorm(double mean, double sd, double lower, double upper);
static SEXP _hesim_rtruncnorm_try(SEXP meanSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rtruncnorm(mean, sd, lower, upper));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rtruncnorm(SEXP meanSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rtruncnorm_try(meanSEXP, sdSEXP, lowerSEXP, upperSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rpwexp
double rpwexp(arma::rowvec rate, arma::rowvec time);
static SEXP _hesim_rpwexp_try(SEXP rateSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(rpwexp(rate, time));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rpwexp(SEXP rateSEXP, SEXP timeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rpwexp_try(rateSEXP, timeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rpwexp_vec
std::vector<double> rpwexp_vec(int n, arma::mat rate, arma::rowvec time);
static SEXP _hesim_rpwexp_vec_try(SEXP nSEXP, SEXP rateSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(rpwexp_vec(n, rate, time));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rpwexp_vec(SEXP nSEXP, SEXP rateSEXP, SEXP timeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rpwexp_vec_try(nSEXP, rateSEXP, timeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcat
int rcat(arma::rowvec probs);
static SEXP _hesim_rcat_try(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcat(probs));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rcat(SEXP probsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rcat_try(probsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rcat_vec
arma::vec rcat_vec(int n, arma::mat probs);
static SEXP _hesim_rcat_vec_try(SEXP nSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcat_vec(n, probs));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rcat_vec(SEXP nSEXP, SEXP probsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rcat_vec_try(nSEXP, probsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rdirichlet
arma::rowvec rdirichlet(arma::rowvec alpha);
static SEXP _hesim_rdirichlet_try(SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet(alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rdirichlet(SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rdirichlet_try(alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rdirichlet_mat
arma::cube rdirichlet_mat(int n, arma::mat alpha);
static SEXP _hesim_rdirichlet_mat_try(SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rdirichlet_mat(n, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _hesim_rdirichlet_mat(SEXP nSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_hesim_rdirichlet_mat_try(nSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// C_test_xptr_TimeFunTest
SEXP C_test_xptr_TimeFunTest(Rcpp::List L);
RcppExport SEXP _hesim_C_test_xptr_TimeFunTest(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_xptr_TimeFunTest(L));
    return rcpp_result_gen;
END_RCPP
}
// C_test_InputData
arma::rowvec C_test_InputData(Rcpp::List R_InputData, int param_id, int strategy_id, int patient_id, int line, int health_id);
RcppExport SEXP _hesim_C_test_InputData(SEXP R_InputDataSEXP, SEXP param_idSEXP, SEXP strategy_idSEXP, SEXP patient_idSEXP, SEXP lineSEXP, SEXP health_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_InputData(R_InputDataSEXP);
    Rcpp::traits::input_parameter< int >::type param_id(param_idSEXP);
    Rcpp::traits::input_parameter< int >::type strategy_id(strategy_idSEXP);
    Rcpp::traits::input_parameter< int >::type patient_id(patient_idSEXP);
    Rcpp::traits::input_parameter< int >::type line(lineSEXP);
    Rcpp::traits::input_parameter< int >::type health_id(health_idSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_InputData(R_InputData, param_id, strategy_id, patient_id, line, health_id));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trapzfun
double C_test_trapzfun(std::vector<double> x);
RcppExport SEXP _hesim_C_test_trapzfun(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trapzfun(x));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trapz
double C_test_trapz(std::vector<double> x, std::vector<double> y);
RcppExport SEXP _hesim_C_test_trapz(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trapz(x, y));
    return rcpp_result_gen;
END_RCPP
}
// C_test_cumtrapzfun
std::vector<double> C_test_cumtrapzfun(std::vector<double> t);
RcppExport SEXP _hesim_C_test_cumtrapzfun(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_cumtrapzfun(t));
    return rcpp_result_gen;
END_RCPP
}
// C_test_simpsfun
double C_test_simpsfun(std::vector<double> t);
RcppExport SEXP _hesim_C_test_simpsfun(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_simpsfun(t));
    return rcpp_result_gen;
END_RCPP
}
// C_test_cumsimpsfun
std::vector<double> C_test_cumsimpsfun(std::vector<double> t);
RcppExport SEXP _hesim_C_test_cumsimpsfun(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_cumsimpsfun(t));
    return rcpp_result_gen;
END_RCPP
}
// C_PartSurvCurves_summary
Rcpp::DataFrame C_PartSurvCurves_summary(Rcpp::Environment R_PartSurvCurves, std::vector<double> x, std::string type, double dr);
RcppExport SEXP _hesim_C_PartSurvCurves_summary(SEXP R_PartSurvCurvesSEXP, SEXP xSEXP, SEXP typeSEXP, SEXP drSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_PartSurvCurves(R_PartSurvCurvesSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type dr(drSEXP);
    rcpp_result_gen = Rcpp::wrap(C_PartSurvCurves_summary(R_PartSurvCurves, x, type, dr));
    return rcpp_result_gen;
END_RCPP
}
// C_PartSurvStateVals_predict
Rcpp::DataFrame C_PartSurvStateVals_predict(Rcpp::Environment R_PartSurvStateVals);
RcppExport SEXP _hesim_C_PartSurvStateVals_predict(SEXP R_PartSurvStateValsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_PartSurvStateVals(R_PartSurvStateValsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_PartSurvStateVals_predict(R_PartSurvStateVals));
    return rcpp_result_gen;
END_RCPP
}
// C_PartSurv_sim_stateprobs
Rcpp::List C_PartSurv_sim_stateprobs(Rcpp::Environment R_PartSurv);
RcppExport SEXP _hesim_C_PartSurv_sim_stateprobs(SEXP R_PartSurvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_PartSurv(R_PartSurvSEXP);
    rcpp_result_gen = Rcpp::wrap(C_PartSurv_sim_stateprobs(R_PartSurv));
    return rcpp_result_gen;
END_RCPP
}
// C_PartSurv_sim_auc
Rcpp::List C_PartSurv_sim_auc(Rcpp::Environment R_PartSurv, Rcpp::DataFrame R_stateprobs, std::vector<double> dr, std::string type, std::vector<std::string> type_names);
RcppExport SEXP _hesim_C_PartSurv_sim_auc(SEXP R_PartSurvSEXP, SEXP R_stateprobsSEXP, SEXP drSEXP, SEXP typeSEXP, SEXP type_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_PartSurv(R_PartSurvSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_stateprobs(R_stateprobsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type dr(drSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type type_names(type_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(C_PartSurv_sim_auc(R_PartSurv, R_stateprobs, dr, type, type_names));
    return rcpp_result_gen;
END_RCPP
}
// C_rowmax
arma::colvec C_rowmax(arma::mat x);
RcppExport SEXP _hesim_C_rowmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rowmax(x));
    return rcpp_result_gen;
END_RCPP
}
// C_rowmax_index
arma::ucolvec C_rowmax_index(arma::mat x);
RcppExport SEXP _hesim_C_rowmax_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rowmax_index(x));
    return rcpp_result_gen;
END_RCPP
}
// C_test_add_constant_int
std::vector<int> C_test_add_constant_int(std::vector<int> v, double value);
RcppExport SEXP _hesim_C_test_add_constant_int(SEXP vSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_add_constant_int(v, value));
    return rcpp_result_gen;
END_RCPP
}
// C_test_add_constant_double
std::vector<double> C_test_add_constant_double(std::vector<double> v, double value);
RcppExport SEXP _hesim_C_test_add_constant_double(SEXP vSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_add_constant_double(v, value));
    return rcpp_result_gen;
END_RCPP
}
// test_zeroin
double test_zeroin();
RcppExport SEXP _hesim_test_zeroin() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_zeroin());
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _hesim_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*qgompertz)(double,double,double)");
        signatures.insert("/** * Random number generation from Gompertz distribution * with the same paramerization in R stats.  * @param shape The shape parameter. * @param rate The rate parameter. * @return A random sample from the Gompertz distribution. */ double(*rgompertz)(double,double)");
        signatures.insert("double(*qllogis)(double,double,double,int,int)");
        signatures.insert("double(*rllogis)(double,double)");
        signatures.insert("double(*rgengamma)(double,double,double)");
        signatures.insert("std::vector<double>(*C_rgengamma_vec)(int,std::vector<double>,std::vector<double>,std::vector<double>)");
        signatures.insert("double(*rtruncnorm)(double,double,double,double)");
        signatures.insert("double(*rpwexp)(arma::rowvec,arma::rowvec)");
        signatures.insert("std::vector<double>(*C_rpwexp_vec)(int,arma::mat,arma::rowvec)");
        signatures.insert("int(*rcat)(arma::rowvec)");
        signatures.insert("arma::vec(*C_rcat_vec)(int,arma::mat)");
        signatures.insert("arma::rowvec(*rdirichlet)(arma::rowvec)");
        signatures.insert("arma::cube(*C_rdirichlet_mat)(int,arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _hesim_RcppExport_registerCCallable() { 
    R_RegisterCCallable("hesim", "_hesim_qgompertz", (DL_FUNC)_hesim_qgompertz_try);
    R_RegisterCCallable("hesim", "_hesim_rgompertz", (DL_FUNC)_hesim_rgompertz_try);
    R_RegisterCCallable("hesim", "_hesim_qllogis", (DL_FUNC)_hesim_qllogis_try);
    R_RegisterCCallable("hesim", "_hesim_rllogis", (DL_FUNC)_hesim_rllogis_try);
    R_RegisterCCallable("hesim", "_hesim_rgengamma", (DL_FUNC)_hesim_rgengamma_try);
    R_RegisterCCallable("hesim", "_hesim_C_rgengamma_vec", (DL_FUNC)_hesim_rgengamma_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rtruncnorm", (DL_FUNC)_hesim_rtruncnorm_try);
    R_RegisterCCallable("hesim", "_hesim_rpwexp", (DL_FUNC)_hesim_rpwexp_try);
    R_RegisterCCallable("hesim", "_hesim_C_rpwexp_vec", (DL_FUNC)_hesim_rpwexp_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rcat", (DL_FUNC)_hesim_rcat_try);
    R_RegisterCCallable("hesim", "_hesim_C_rcat_vec", (DL_FUNC)_hesim_rcat_vec_try);
    R_RegisterCCallable("hesim", "_hesim_rdirichlet", (DL_FUNC)_hesim_rdirichlet_try);
    R_RegisterCCallable("hesim", "_hesim_C_rdirichlet_mat", (DL_FUNC)_hesim_rdirichlet_mat_try);
    R_RegisterCCallable("hesim", "_hesim_RcppExport_validate", (DL_FUNC)_hesim_RcppExport_validate);
    return R_NilValue;
}

RcppExport SEXP _rcpp_module_boot_Distributions();

static const R_CallMethodDef CallEntries[] = {
    {"_hesim_incr_effectC", (DL_FUNC) &_hesim_incr_effectC, 5},
    {"_hesim_ceacC", (DL_FUNC) &_hesim_ceacC, 6},
    {"_hesim_mceC", (DL_FUNC) &_hesim_mceC, 6},
    {"_hesim_VstarC", (DL_FUNC) &_hesim_VstarC, 6},
    {"_hesim_qgompertz", (DL_FUNC) &_hesim_qgompertz, 3},
    {"_hesim_rgompertz", (DL_FUNC) &_hesim_rgompertz, 2},
    {"_hesim_qllogis", (DL_FUNC) &_hesim_qllogis, 5},
    {"_hesim_rllogis", (DL_FUNC) &_hesim_rllogis, 2},
    {"_hesim_rgengamma", (DL_FUNC) &_hesim_rgengamma, 3},
    {"_hesim_rgengamma_vec", (DL_FUNC) &_hesim_rgengamma_vec, 4},
    {"_hesim_rtruncnorm", (DL_FUNC) &_hesim_rtruncnorm, 4},
    {"_hesim_rpwexp", (DL_FUNC) &_hesim_rpwexp, 2},
    {"_hesim_rpwexp_vec", (DL_FUNC) &_hesim_rpwexp_vec, 3},
    {"_hesim_rcat", (DL_FUNC) &_hesim_rcat, 1},
    {"_hesim_rcat_vec", (DL_FUNC) &_hesim_rcat_vec, 2},
    {"_hesim_rdirichlet", (DL_FUNC) &_hesim_rdirichlet, 1},
    {"_hesim_rdirichlet_mat", (DL_FUNC) &_hesim_rdirichlet_mat, 2},
    {"_hesim_C_test_xptr_TimeFunTest", (DL_FUNC) &_hesim_C_test_xptr_TimeFunTest, 1},
    {"_hesim_C_test_InputData", (DL_FUNC) &_hesim_C_test_InputData, 6},
    {"_hesim_C_test_trapzfun", (DL_FUNC) &_hesim_C_test_trapzfun, 1},
    {"_hesim_C_test_trapz", (DL_FUNC) &_hesim_C_test_trapz, 2},
    {"_hesim_C_test_cumtrapzfun", (DL_FUNC) &_hesim_C_test_cumtrapzfun, 1},
    {"_hesim_C_test_simpsfun", (DL_FUNC) &_hesim_C_test_simpsfun, 1},
    {"_hesim_C_test_cumsimpsfun", (DL_FUNC) &_hesim_C_test_cumsimpsfun, 1},
    {"_hesim_C_PartSurvCurves_summary", (DL_FUNC) &_hesim_C_PartSurvCurves_summary, 4},
    {"_hesim_C_PartSurvStateVals_predict", (DL_FUNC) &_hesim_C_PartSurvStateVals_predict, 1},
    {"_hesim_C_PartSurv_sim_stateprobs", (DL_FUNC) &_hesim_C_PartSurv_sim_stateprobs, 1},
    {"_hesim_C_PartSurv_sim_auc", (DL_FUNC) &_hesim_C_PartSurv_sim_auc, 5},
    {"_hesim_C_rowmax", (DL_FUNC) &_hesim_C_rowmax, 1},
    {"_hesim_C_rowmax_index", (DL_FUNC) &_hesim_C_rowmax_index, 1},
    {"_hesim_C_test_add_constant_int", (DL_FUNC) &_hesim_C_test_add_constant_int, 2},
    {"_hesim_C_test_add_constant_double", (DL_FUNC) &_hesim_C_test_add_constant_double, 2},
    {"_hesim_test_zeroin", (DL_FUNC) &_hesim_test_zeroin, 0},
    {"_rcpp_module_boot_Distributions", (DL_FUNC) &_rcpp_module_boot_Distributions, 0},
    {"_hesim_RcppExport_registerCCallable", (DL_FUNC) &_hesim_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_hesim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

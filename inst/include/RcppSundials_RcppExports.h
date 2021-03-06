// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_RcppSundials_RCPPEXPORTS_H_GEN_
#define RCPP_RcppSundials_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace RcppSundials {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("RcppSundials", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("RcppSundials", "RcppSundials_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in RcppSundials");
            }
        }
    }

    inline Rcpp::NumericMatrix wrap_cvodes(Rcpp::NumericVector times, Rcpp::NumericVector states_, Rcpp::NumericVector parameters_, Rcpp::NumericVector initSens_, Rcpp::DataFrame events_, Rcpp::List settings, SEXP model_, SEXP jacobian_, SEXP sens_) {
        typedef SEXP(*Ptr_wrap_cvodes)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_wrap_cvodes p_wrap_cvodes = NULL;
        if (p_wrap_cvodes == NULL) {
            validateSignature("Rcpp::NumericMatrix(*wrap_cvodes)(Rcpp::NumericVector,Rcpp::NumericVector,Rcpp::NumericVector,Rcpp::NumericVector,Rcpp::DataFrame,Rcpp::List,SEXP,SEXP,SEXP)");
            p_wrap_cvodes = (Ptr_wrap_cvodes)R_GetCCallable("RcppSundials", "RcppSundials_wrap_cvodes");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_wrap_cvodes(Rcpp::wrap(times), Rcpp::wrap(states_), Rcpp::wrap(parameters_), Rcpp::wrap(initSens_), Rcpp::wrap(events_), Rcpp::wrap(settings), Rcpp::wrap(model_), Rcpp::wrap(jacobian_), Rcpp::wrap(sens_));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::NumericMatrix >(rcpp_result_gen);
    }

}

#endif // RCPP_RcppSundials_RCPPEXPORTS_H_GEN_

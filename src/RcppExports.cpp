// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// znorm_cpp
NumericVector znorm_cpp(NumericVector x, double threshold);
RcppExport SEXP jmotif_znorm_cpp(SEXP xSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(znorm_cpp(x, threshold));
    return __result;
END_RCPP
}
// reshape_cpp
NumericMatrix reshape_cpp(NumericMatrix a, int n, int m);
RcppExport SEXP jmotif_reshape_cpp(SEXP aSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    __result = Rcpp::wrap(reshape_cpp(a, n, m));
    return __result;
END_RCPP
}
// col_means_cpp
NumericVector col_means_cpp(NumericMatrix a);
RcppExport SEXP jmotif_col_means_cpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    __result = Rcpp::wrap(col_means_cpp(a));
    return __result;
END_RCPP
}
// paa_cpp
NumericVector paa_cpp(NumericVector ts, int paa_num);
RcppExport SEXP jmotif_paa_cpp(SEXP tsSEXP, SEXP paa_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type paa_num(paa_numSEXP);
    __result = Rcpp::wrap(paa_cpp(ts, paa_num));
    return __result;
END_RCPP
}
// idx2letter_cpp
char idx2letter_cpp(int idx);
RcppExport SEXP jmotif_idx2letter_cpp(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    __result = Rcpp::wrap(idx2letter_cpp(idx));
    return __result;
END_RCPP
}
// letter2idx_cpp
int letter2idx_cpp(char letter);
RcppExport SEXP jmotif_letter2idx_cpp(SEXP letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< char >::type letter(letterSEXP);
    __result = Rcpp::wrap(letter2idx_cpp(letter));
    return __result;
END_RCPP
}
// letters2idx_cpp
IntegerVector letters2idx_cpp(CharacterVector str);
RcppExport SEXP jmotif_letters2idx_cpp(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type str(strSEXP);
    __result = Rcpp::wrap(letters2idx_cpp(str));
    return __result;
END_RCPP
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/googlePolylines.h"
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_encodeSfGeometry
Rcpp::List rcpp_encodeSfGeometry(Rcpp::List sfc, bool strip);
RcppExport SEXP _googlePolylines_rcpp_encodeSfGeometry(SEXP sfcSEXP, SEXP stripSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type strip(stripSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encodeSfGeometry(sfc, strip));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_decode_polyline_list
Rcpp::List rcpp_decode_polyline_list(Rcpp::List encodedList, std::string attribute);
RcppExport SEXP _googlePolylines_rcpp_decode_polyline_list(SEXP encodedListSEXP, SEXP attributeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type encodedList(encodedListSEXP);
    Rcpp::traits::input_parameter< std::string >::type attribute(attributeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_decode_polyline_list(encodedList, attribute));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_decode_polyline
Rcpp::List rcpp_decode_polyline(Rcpp::StringVector encodedStrings, Rcpp::String encoded_type);
RcppExport SEXP _googlePolylines_rcpp_decode_polyline(SEXP encodedStringsSEXP, SEXP encoded_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type encodedStrings(encodedStringsSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type encoded_type(encoded_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_decode_polyline(encodedStrings, encoded_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_encode_polyline
std::string rcpp_encode_polyline(std::vector<double> longitude, std::vector<double> latitude);
RcppExport SEXP _googlePolylines_rcpp_encode_polyline(SEXP longitudeSEXP, SEXP latitudeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type latitude(latitudeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encode_polyline(longitude, latitude));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_encode_polyline_byrow
std::vector<std::string> rcpp_encode_polyline_byrow(Rcpp::NumericVector longitude, Rcpp::NumericVector latitude);
RcppExport SEXP _googlePolylines_rcpp_encode_polyline_byrow(SEXP longitudeSEXP, SEXP latitudeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type latitude(latitudeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encode_polyline_byrow(longitude, latitude));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polyline_to_wkt
Rcpp::StringVector rcpp_polyline_to_wkt(Rcpp::List sfencoded);
RcppExport SEXP _googlePolylines_rcpp_polyline_to_wkt(SEXP sfencodedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfencoded(sfencodedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polyline_to_wkt(sfencoded));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_wkt_to_polyline
Rcpp::List rcpp_wkt_to_polyline(Rcpp::StringVector wkt);
RcppExport SEXP _googlePolylines_rcpp_wkt_to_polyline(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_wkt_to_polyline(wkt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_googlePolylines_rcpp_encodeSfGeometry", (DL_FUNC) &_googlePolylines_rcpp_encodeSfGeometry, 2},
    {"_googlePolylines_rcpp_decode_polyline_list", (DL_FUNC) &_googlePolylines_rcpp_decode_polyline_list, 2},
    {"_googlePolylines_rcpp_decode_polyline", (DL_FUNC) &_googlePolylines_rcpp_decode_polyline, 2},
    {"_googlePolylines_rcpp_encode_polyline", (DL_FUNC) &_googlePolylines_rcpp_encode_polyline, 2},
    {"_googlePolylines_rcpp_encode_polyline_byrow", (DL_FUNC) &_googlePolylines_rcpp_encode_polyline_byrow, 2},
    {"_googlePolylines_rcpp_polyline_to_wkt", (DL_FUNC) &_googlePolylines_rcpp_polyline_to_wkt, 1},
    {"_googlePolylines_rcpp_wkt_to_polyline", (DL_FUNC) &_googlePolylines_rcpp_wkt_to_polyline, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_googlePolylines(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

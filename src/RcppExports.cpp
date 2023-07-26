// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_circle_layout
Rcpp::List cpp_circle_layout(std::vector<double> input_rad_vec, Rcpp::NumericVector centroid, double rad_decrease, bool try_place, bool verbose);
RcppExport SEXP _APackOfTheClones_cpp_circle_layout(SEXP input_rad_vecSEXP, SEXP centroidSEXP, SEXP rad_decreaseSEXP, SEXP try_placeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type input_rad_vec(input_rad_vecSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type centroid(centroidSEXP);
    Rcpp::traits::input_parameter< double >::type rad_decrease(rad_decreaseSEXP);
    Rcpp::traits::input_parameter< bool >::type try_place(try_placeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_circle_layout(input_rad_vec, centroid, rad_decrease, try_place, verbose));
    return rcpp_result_gen;
END_RCPP
}
// get_average_vector
std::vector<double> get_average_vector(Rcpp::List vec_list);
RcppExport SEXP _APackOfTheClones_get_average_vector(SEXP vec_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type vec_list(vec_listSEXP);
    rcpp_result_gen = Rcpp::wrap(get_average_vector(vec_list));
    return rcpp_result_gen;
END_RCPP
}
// get_component_repulsion_vector
std::vector<double> get_component_repulsion_vector(Rcpp::List inp, int i, int j, double G);
RcppExport SEXP _APackOfTheClones_get_component_repulsion_vector(SEXP inpSEXP, SEXP iSEXP, SEXP jSEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< double >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(get_component_repulsion_vector(inp, i, j, G));
    return rcpp_result_gen;
END_RCPP
}
// do_cluster_intersect
bool do_cluster_intersect(std::vector<double> Cn_centroid, double Cn_clRad, std::vector<double> Cm_centroid, double Cm_clRad, double thr);
RcppExport SEXP _APackOfTheClones_do_cluster_intersect(SEXP Cn_centroidSEXP, SEXP Cn_clRadSEXP, SEXP Cm_centroidSEXP, SEXP Cm_clRadSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type Cn_centroid(Cn_centroidSEXP);
    Rcpp::traits::input_parameter< double >::type Cn_clRad(Cn_clRadSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type Cm_centroid(Cm_centroidSEXP);
    Rcpp::traits::input_parameter< double >::type Cm_clRad(Cm_clRadSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(do_cluster_intersect(Cn_centroid, Cn_clRad, Cm_centroid, Cm_clRad, thr));
    return rcpp_result_gen;
END_RCPP
}
// calculate_transformation_vectors
Rcpp::List calculate_transformation_vectors(Rcpp::List transformation_vectors, Rcpp::List overall_repulsion_vec, int num_clusters);
RcppExport SEXP _APackOfTheClones_calculate_transformation_vectors(SEXP transformation_vectorsSEXP, SEXP overall_repulsion_vecSEXP, SEXP num_clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type transformation_vectors(transformation_vectorsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type overall_repulsion_vec(overall_repulsion_vecSEXP);
    Rcpp::traits::input_parameter< int >::type num_clusters(num_clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_transformation_vectors(transformation_vectors, overall_repulsion_vec, num_clusters));
    return rcpp_result_gen;
END_RCPP
}
// has_repeats
bool has_repeats(const Rcpp::NumericVector vec1, const Rcpp::NumericVector vec2);
RcppExport SEXP _APackOfTheClones_has_repeats(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(has_repeats(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// has_common_strs
bool has_common_strs(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2);
RcppExport SEXP _APackOfTheClones_has_common_strs(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(has_common_strs(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_APackOfTheClones_cpp_circle_layout", (DL_FUNC) &_APackOfTheClones_cpp_circle_layout, 5},
    {"_APackOfTheClones_get_average_vector", (DL_FUNC) &_APackOfTheClones_get_average_vector, 1},
    {"_APackOfTheClones_get_component_repulsion_vector", (DL_FUNC) &_APackOfTheClones_get_component_repulsion_vector, 4},
    {"_APackOfTheClones_do_cluster_intersect", (DL_FUNC) &_APackOfTheClones_do_cluster_intersect, 5},
    {"_APackOfTheClones_calculate_transformation_vectors", (DL_FUNC) &_APackOfTheClones_calculate_transformation_vectors, 3},
    {"_APackOfTheClones_has_repeats", (DL_FUNC) &_APackOfTheClones_has_repeats, 2},
    {"_APackOfTheClones_has_common_strs", (DL_FUNC) &_APackOfTheClones_has_common_strs, 2},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_APackOfTheClones(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

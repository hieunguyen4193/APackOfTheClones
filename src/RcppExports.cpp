// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcppGetEdgeCircleIndicies
std::vector<int> rcppGetEdgeCircleIndicies(Rcpp::DataFrame apotcPlotDataFrame);
RcppExport SEXP _APackOfTheClones_rcppGetEdgeCircleIndicies(SEXP apotcPlotDataFrameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type apotcPlotDataFrame(apotcPlotDataFrameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppGetEdgeCircleIndicies(apotcPlotDataFrame));
    return rcpp_result_gen;
END_RCPP
}
// rcppRemoveUniqueClonesHelper
Rcpp::List rcppRemoveUniqueClonesHelper(std::vector<std::string> clonotypes, std::vector<std::vector<int>> clusters);
RcppExport SEXP _APackOfTheClones_rcppRemoveUniqueClonesHelper(SEXP clonotypesSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type clonotypes(clonotypesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppRemoveUniqueClonesHelper(clonotypes, clusters));
    return rcpp_result_gen;
END_RCPP
}
// rcppFilterSharedClonesByClusterHelper
std::vector<std::vector<int>> rcppFilterSharedClonesByClusterHelper(std::vector<std::vector<int>> sharedClusters, std::vector<bool> includeCluster);
RcppExport SEXP _APackOfTheClones_rcppFilterSharedClonesByClusterHelper(SEXP sharedClustersSEXP, SEXP includeClusterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type sharedClusters(sharedClustersSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type includeCluster(includeClusterSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppFilterSharedClonesByClusterHelper(sharedClusters, includeCluster));
    return rcpp_result_gen;
END_RCPP
}
// rcppConstructLineLinkDf
Rcpp::DataFrame rcppConstructLineLinkDf(Rcpp::List clusterLists, Rcpp::List rawCloneSizes, Rcpp::List sharedClonotypeClusters, double extraSpacing);
RcppExport SEXP _APackOfTheClones_rcppConstructLineLinkDf(SEXP clusterListsSEXP, SEXP rawCloneSizesSEXP, SEXP sharedClonotypeClustersSEXP, SEXP extraSpacingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type clusterLists(clusterListsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type rawCloneSizes(rawCloneSizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sharedClonotypeClusters(sharedClonotypeClustersSEXP);
    Rcpp::traits::input_parameter< double >::type extraSpacing(extraSpacingSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppConstructLineLinkDf(clusterLists, rawCloneSizes, sharedClonotypeClusters, extraSpacing));
    return rcpp_result_gen;
END_RCPP
}
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
// rcppFilterReductionCoords
Rcpp::NumericMatrix rcppFilterReductionCoords(std::vector<std::string>& seuratBarcodes, Rcpp::NumericMatrix reductionCoords);
RcppExport SEXP _APackOfTheClones_rcppFilterReductionCoords(SEXP seuratBarcodesSEXP, SEXP reductionCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type seuratBarcodes(seuratBarcodesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type reductionCoords(reductionCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppFilterReductionCoords(seuratBarcodes, reductionCoords));
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

static const R_CallMethodDef CallEntries[] = {
    {"_APackOfTheClones_rcppGetEdgeCircleIndicies", (DL_FUNC) &_APackOfTheClones_rcppGetEdgeCircleIndicies, 1},
    {"_APackOfTheClones_rcppRemoveUniqueClonesHelper", (DL_FUNC) &_APackOfTheClones_rcppRemoveUniqueClonesHelper, 2},
    {"_APackOfTheClones_rcppFilterSharedClonesByClusterHelper", (DL_FUNC) &_APackOfTheClones_rcppFilterSharedClonesByClusterHelper, 2},
    {"_APackOfTheClones_rcppConstructLineLinkDf", (DL_FUNC) &_APackOfTheClones_rcppConstructLineLinkDf, 4},
    {"_APackOfTheClones_cpp_circle_layout", (DL_FUNC) &_APackOfTheClones_cpp_circle_layout, 5},
    {"_APackOfTheClones_rcppFilterReductionCoords", (DL_FUNC) &_APackOfTheClones_rcppFilterReductionCoords, 2},
    {"_APackOfTheClones_get_average_vector", (DL_FUNC) &_APackOfTheClones_get_average_vector, 1},
    {"_APackOfTheClones_get_component_repulsion_vector", (DL_FUNC) &_APackOfTheClones_get_component_repulsion_vector, 4},
    {"_APackOfTheClones_do_cluster_intersect", (DL_FUNC) &_APackOfTheClones_do_cluster_intersect, 5},
    {"_APackOfTheClones_calculate_transformation_vectors", (DL_FUNC) &_APackOfTheClones_calculate_transformation_vectors, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_APackOfTheClones(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

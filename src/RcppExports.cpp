// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// bySum
DataFrame bySum(List ffValues, List ffBins);
RcppExport SEXP _Cyclops_bySum(SEXP ffValuesSEXP, SEXP ffBinsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ffValues(ffValuesSEXP);
    Rcpp::traits::input_parameter< List >::type ffBins(ffBinsSEXP);
    rcpp_result_gen = Rcpp::wrap(bySum(ffValues, ffBins));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetModelTypeNames
std::vector<std::string> cyclopsGetModelTypeNames();
RcppExport SEXP _Cyclops_cyclopsGetModelTypeNames() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cyclopsGetModelTypeNames());
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetRemoveInterceptNames
std::vector<std::string> cyclopsGetRemoveInterceptNames();
RcppExport SEXP _Cyclops_cyclopsGetRemoveInterceptNames() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cyclopsGetRemoveInterceptNames());
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetIsSurvivalNames
std::vector<std::string> cyclopsGetIsSurvivalNames();
RcppExport SEXP _Cyclops_cyclopsGetIsSurvivalNames() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cyclopsGetIsSurvivalNames());
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetUseOffsetNames
std::vector<std::string> cyclopsGetUseOffsetNames();
RcppExport SEXP _Cyclops_cyclopsGetUseOffsetNames() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cyclopsGetUseOffsetNames());
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetComputeDevice
std::string cyclopsGetComputeDevice(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsGetComputeDevice(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetComputeDevice(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSetBeta
void cyclopsSetBeta(SEXP inRcppCcdInterface, const std::vector<double>& beta);
RcppExport SEXP _Cyclops_cyclopsSetBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type beta(betaSEXP);
    cyclopsSetBeta(inRcppCcdInterface, beta);
    return R_NilValue;
END_RCPP
}
// cyclopsSetFixedBeta
void cyclopsSetFixedBeta(SEXP inRcppCcdInterface, int beta, bool fixed);
RcppExport SEXP _Cyclops_cyclopsSetFixedBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP, SEXP fixedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< int >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed(fixedSEXP);
    cyclopsSetFixedBeta(inRcppCcdInterface, beta, fixed);
    return R_NilValue;
END_RCPP
}
// cyclopsGetIsRegularized
bool cyclopsGetIsRegularized(SEXP inRcppCcdInterface, const int index);
RcppExport SEXP _Cyclops_cyclopsGetIsRegularized(SEXP inRcppCcdInterfaceSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetIsRegularized(inRcppCcdInterface, index));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSetWeights
void cyclopsSetWeights(SEXP inRcppCcdInterface, NumericVector& weights);
RcppExport SEXP _Cyclops_cyclopsSetWeights(SEXP inRcppCcdInterfaceSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type weights(weightsSEXP);
    cyclopsSetWeights(inRcppCcdInterface, weights);
    return R_NilValue;
END_RCPP
}
// cyclopsGetPredictiveLogLikelihood
double cyclopsGetPredictiveLogLikelihood(SEXP inRcppCcdInterface, NumericVector& weights);
RcppExport SEXP _Cyclops_cyclopsGetPredictiveLogLikelihood(SEXP inRcppCcdInterfaceSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetPredictiveLogLikelihood(inRcppCcdInterface, weights));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetLogLikelihood
double cyclopsGetLogLikelihood(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsGetLogLikelihood(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetLogLikelihood(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetFisherInformation
Eigen::MatrixXd cyclopsGetFisherInformation(SEXP inRcppCcdInterface, const SEXP sexpCovariates);
RcppExport SEXP _Cyclops_cyclopsGetFisherInformation(SEXP inRcppCcdInterfaceSEXP, SEXP sexpCovariatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type sexpCovariates(sexpCovariatesSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetFisherInformation(inRcppCcdInterface, sexpCovariates));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSetPrior
void cyclopsSetPrior(SEXP inRcppCcdInterface, const std::vector<std::string>& priorTypeName, const std::vector<double>& variance, SEXP excludeNumeric, SEXP sexpGraph, Rcpp::List sexpNeighborhood);
RcppExport SEXP _Cyclops_cyclopsSetPrior(SEXP inRcppCcdInterfaceSEXP, SEXP priorTypeNameSEXP, SEXP varianceSEXP, SEXP excludeNumericSEXP, SEXP sexpGraphSEXP, SEXP sexpNeighborhoodSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type priorTypeName(priorTypeNameSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type variance(varianceSEXP);
    Rcpp::traits::input_parameter< SEXP >::type excludeNumeric(excludeNumericSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpGraph(sexpGraphSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sexpNeighborhood(sexpNeighborhoodSEXP);
    cyclopsSetPrior(inRcppCcdInterface, priorTypeName, variance, excludeNumeric, sexpGraph, sexpNeighborhood);
    return R_NilValue;
END_RCPP
}
// cyclopsProfileModel
List cyclopsProfileModel(SEXP inRcppCcdInterface, SEXP sexpCovariates, int threads, double threshold, bool override, bool includePenalty);
RcppExport SEXP _Cyclops_cyclopsProfileModel(SEXP inRcppCcdInterfaceSEXP, SEXP sexpCovariatesSEXP, SEXP threadsSEXP, SEXP thresholdSEXP, SEXP overrideSEXP, SEXP includePenaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpCovariates(sexpCovariatesSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type override(overrideSEXP);
    Rcpp::traits::input_parameter< bool >::type includePenalty(includePenaltySEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsProfileModel(inRcppCcdInterface, sexpCovariates, threads, threshold, override, includePenalty));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsPredictModel
List cyclopsPredictModel(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsPredictModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsPredictModel(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSetControl
void cyclopsSetControl(SEXP inRcppCcdInterface, int maxIterations, double tolerance, const std::string& convergenceType, bool useAutoSearch, int fold, int foldToCompute, double lowerLimit, double upperLimit, int gridSteps, const std::string& noiseLevel, int threads, int seed, bool resetCoefficients, double startingVariance, bool useKKTSwindle, int swindleMultipler, const std::string& selectorType, double initialBound, int maxBoundCount, const std::string& algorithm, bool useSyncCV);
RcppExport SEXP _Cyclops_cyclopsSetControl(SEXP inRcppCcdInterfaceSEXP, SEXP maxIterationsSEXP, SEXP toleranceSEXP, SEXP convergenceTypeSEXP, SEXP useAutoSearchSEXP, SEXP foldSEXP, SEXP foldToComputeSEXP, SEXP lowerLimitSEXP, SEXP upperLimitSEXP, SEXP gridStepsSEXP, SEXP noiseLevelSEXP, SEXP threadsSEXP, SEXP seedSEXP, SEXP resetCoefficientsSEXP, SEXP startingVarianceSEXP, SEXP useKKTSwindleSEXP, SEXP swindleMultiplerSEXP, SEXP selectorTypeSEXP, SEXP initialBoundSEXP, SEXP maxBoundCountSEXP, SEXP algorithmSEXP, SEXP useSyncCVSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type convergenceType(convergenceTypeSEXP);
    Rcpp::traits::input_parameter< bool >::type useAutoSearch(useAutoSearchSEXP);
    Rcpp::traits::input_parameter< int >::type fold(foldSEXP);
    Rcpp::traits::input_parameter< int >::type foldToCompute(foldToComputeSEXP);
    Rcpp::traits::input_parameter< double >::type lowerLimit(lowerLimitSEXP);
    Rcpp::traits::input_parameter< double >::type upperLimit(upperLimitSEXP);
    Rcpp::traits::input_parameter< int >::type gridSteps(gridStepsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type noiseLevel(noiseLevelSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type resetCoefficients(resetCoefficientsSEXP);
    Rcpp::traits::input_parameter< double >::type startingVariance(startingVarianceSEXP);
    Rcpp::traits::input_parameter< bool >::type useKKTSwindle(useKKTSwindleSEXP);
    Rcpp::traits::input_parameter< int >::type swindleMultipler(swindleMultiplerSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type selectorType(selectorTypeSEXP);
    Rcpp::traits::input_parameter< double >::type initialBound(initialBoundSEXP);
    Rcpp::traits::input_parameter< int >::type maxBoundCount(maxBoundCountSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< bool >::type useSyncCV(useSyncCVSEXP);
    cyclopsSetControl(inRcppCcdInterface, maxIterations, tolerance, convergenceType, useAutoSearch, fold, foldToCompute, lowerLimit, upperLimit, gridSteps, noiseLevel, threads, seed, resetCoefficients, startingVariance, useKKTSwindle, swindleMultipler, selectorType, initialBound, maxBoundCount, algorithm, useSyncCV);
    return R_NilValue;
END_RCPP
}
// cyclopsRunCrossValidationl
List cyclopsRunCrossValidationl(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsRunCrossValidationl(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsRunCrossValidationl(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsFitModel
List cyclopsFitModel(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsFitModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsFitModel(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsLogModel
List cyclopsLogModel(SEXP inRcppCcdInterface);
RcppExport SEXP _Cyclops_cyclopsLogModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsLogModel(inRcppCcdInterface));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsInitializeModel
List cyclopsInitializeModel(SEXP inModelData, const std::string& modelType, const std::string& computeDevice, bool computeMLE);
RcppExport SEXP _Cyclops_cyclopsInitializeModel(SEXP inModelDataSEXP, SEXP modelTypeSEXP, SEXP computeDeviceSEXP, SEXP computeMLESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inModelData(inModelDataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type modelType(modelTypeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type computeDevice(computeDeviceSEXP);
    Rcpp::traits::input_parameter< bool >::type computeMLE(computeMLESEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsInitializeModel(inModelData, modelType, computeDevice, computeMLE));
    return rcpp_result_gen;
END_RCPP
}
// listOpenCLDevices
Rcpp::CharacterVector listOpenCLDevices();
RcppExport SEXP _Cyclops_listOpenCLDevices() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(listOpenCLDevices());
    return rcpp_result_gen;
END_RCPP
}
// getDefaultOpenCLDevice
std::string getDefaultOpenCLDevice();
RcppExport SEXP _Cyclops_getDefaultOpenCLDevice() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getDefaultOpenCLDevice());
    return rcpp_result_gen;
END_RCPP
}
// isSorted
bool isSorted(const DataFrame& dataFrame, const std::vector<std::string>& indexes, const std::vector<bool>& ascending);
RcppExport SEXP _Cyclops_isSorted(SEXP dataFrameSEXP, SEXP indexesSEXP, SEXP ascendingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type dataFrame(dataFrameSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type indexes(indexesSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type ascending(ascendingSEXP);
    rcpp_result_gen = Rcpp::wrap(isSorted(dataFrame, indexes, ascending));
    return rcpp_result_gen;
END_RCPP
}
// isSortedVectorList
bool isSortedVectorList(const List& vectorList, const std::vector<bool>& ascending);
RcppExport SEXP _Cyclops_isSortedVectorList(SEXP vectorListSEXP, SEXP ascendingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type vectorList(vectorListSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type ascending(ascendingSEXP);
    rcpp_result_gen = Rcpp::wrap(isSortedVectorList(vectorList, ascending));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsPrintRowIds
void cyclopsPrintRowIds(Environment object);
RcppExport SEXP _Cyclops_cyclopsPrintRowIds(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    cyclopsPrintRowIds(object);
    return R_NilValue;
END_RCPP
}
// isRcppPtrNull
bool isRcppPtrNull(SEXP x);
RcppExport SEXP _Cyclops_isRcppPtrNull(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(isRcppPtrNull(x));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetNumberOfStrata
int cyclopsGetNumberOfStrata(Environment object);
RcppExport SEXP _Cyclops_cyclopsGetNumberOfStrata(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetNumberOfStrata(object));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetCovariateIds
std::vector<int64_t> cyclopsGetCovariateIds(Environment object);
RcppExport SEXP _Cyclops_cyclopsGetCovariateIds(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetCovariateIds(object));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetCovariateType
CharacterVector cyclopsGetCovariateType(Environment object, const std::vector<int64_t>& covariateLabel);
RcppExport SEXP _Cyclops_cyclopsGetCovariateType(SEXP objectSEXP, SEXP covariateLabelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type covariateLabel(covariateLabelSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetCovariateType(object, covariateLabel));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetNumberOfColumns
int cyclopsGetNumberOfColumns(Environment object);
RcppExport SEXP _Cyclops_cyclopsGetNumberOfColumns(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetNumberOfColumns(object));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetNumberOfRows
int cyclopsGetNumberOfRows(Environment object);
RcppExport SEXP _Cyclops_cyclopsGetNumberOfRows(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetNumberOfRows(object));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetNumberOfTypes
int cyclopsGetNumberOfTypes(Environment object);
RcppExport SEXP _Cyclops_cyclopsGetNumberOfTypes(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetNumberOfTypes(object));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsUnivariableCorrelation
std::vector<double> cyclopsUnivariableCorrelation(Environment x, const std::vector<long>& covariateLabel);
RcppExport SEXP _Cyclops_cyclopsUnivariableCorrelation(SEXP xSEXP, SEXP covariateLabelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsUnivariableCorrelation(x, covariateLabel));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSumByGroup
List cyclopsSumByGroup(Environment x, const std::vector<long>& covariateLabel, const long groupByLabel, const int power);
RcppExport SEXP _Cyclops_cyclopsSumByGroup(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP groupByLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP);
    Rcpp::traits::input_parameter< const long >::type groupByLabel(groupByLabelSEXP);
    Rcpp::traits::input_parameter< const int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsSumByGroup(x, covariateLabel, groupByLabel, power));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSumByStratum
List cyclopsSumByStratum(Environment x, const std::vector<long>& covariateLabel, const int power);
RcppExport SEXP _Cyclops_cyclopsSumByStratum(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP);
    Rcpp::traits::input_parameter< const int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsSumByStratum(x, covariateLabel, power));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSum
std::vector<double> cyclopsSum(Environment x, const std::vector<long>& covariateLabel, const int power);
RcppExport SEXP _Cyclops_cyclopsSum(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP);
    Rcpp::traits::input_parameter< const int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsSum(x, covariateLabel, power));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsNewSqlData
List cyclopsNewSqlData(const std::string& modelTypeName, const std::string& noiseLevel);
RcppExport SEXP _Cyclops_cyclopsNewSqlData(SEXP modelTypeNameSEXP, SEXP noiseLevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type noiseLevel(noiseLevelSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsNewSqlData(modelTypeName, noiseLevel));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsMedian
double cyclopsMedian(const NumericVector& vector);
RcppExport SEXP _Cyclops_cyclopsMedian(SEXP vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type vector(vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsMedian(vector));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsQuantile
double cyclopsQuantile(const NumericVector& vector, double q);
RcppExport SEXP _Cyclops_cyclopsQuantile(SEXP vectorSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type vector(vectorSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsQuantile(vector, q));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsNormalizeCovariates
std::vector<double> cyclopsNormalizeCovariates(Environment x, const std::string& normalizationName);
RcppExport SEXP _Cyclops_cyclopsNormalizeCovariates(SEXP xSEXP, SEXP normalizationNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type normalizationName(normalizationNameSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsNormalizeCovariates(x, normalizationName));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsSetHasIntercept
void cyclopsSetHasIntercept(Environment x, bool hasIntercept);
RcppExport SEXP _Cyclops_cyclopsSetHasIntercept(SEXP xSEXP, SEXP hasInterceptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type hasIntercept(hasInterceptSEXP);
    cyclopsSetHasIntercept(x, hasIntercept);
    return R_NilValue;
END_RCPP
}
// cyclopsGetHasIntercept
bool cyclopsGetHasIntercept(Environment x);
RcppExport SEXP _Cyclops_cyclopsGetHasIntercept(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetHasIntercept(x));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetHasOffset
bool cyclopsGetHasOffset(Environment x);
RcppExport SEXP _Cyclops_cyclopsGetHasOffset(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetHasOffset(x));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetMeanOffset
double cyclopsGetMeanOffset(Environment x);
RcppExport SEXP _Cyclops_cyclopsGetMeanOffset(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetMeanOffset(x));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsFinalizeData
void cyclopsFinalizeData(Environment x, bool addIntercept, SEXP sexpOffsetCovariate, bool offsetAlreadyOnLogScale, bool sortCovariates, SEXP sexpCovariatesDense, bool magicFlag);
RcppExport SEXP _Cyclops_cyclopsFinalizeData(SEXP xSEXP, SEXP addInterceptSEXP, SEXP sexpOffsetCovariateSEXP, SEXP offsetAlreadyOnLogScaleSEXP, SEXP sortCovariatesSEXP, SEXP sexpCovariatesDenseSEXP, SEXP magicFlagSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type addIntercept(addInterceptSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpOffsetCovariate(sexpOffsetCovariateSEXP);
    Rcpp::traits::input_parameter< bool >::type offsetAlreadyOnLogScale(offsetAlreadyOnLogScaleSEXP);
    Rcpp::traits::input_parameter< bool >::type sortCovariates(sortCovariatesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexpCovariatesDense(sexpCovariatesDenseSEXP);
    Rcpp::traits::input_parameter< bool >::type magicFlag(magicFlagSEXP);
    cyclopsFinalizeData(x, addIntercept, sexpOffsetCovariate, offsetAlreadyOnLogScale, sortCovariates, sexpCovariatesDense, magicFlag);
    return R_NilValue;
END_RCPP
}
// cyclopsLoadDataY
void cyclopsLoadDataY(Environment x, const std::vector<int64_t>& stratumId, const std::vector<int64_t>& rowId, const std::vector<double>& y, const std::vector<double>& time);
RcppExport SEXP _Cyclops_cyclopsLoadDataY(SEXP xSEXP, SEXP stratumIdSEXP, SEXP rowIdSEXP, SEXP ySEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type stratumId(stratumIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type rowId(rowIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type time(timeSEXP);
    cyclopsLoadDataY(x, stratumId, rowId, y, time);
    return R_NilValue;
END_RCPP
}
// cyclopsLoadDataMultipleX
int cyclopsLoadDataMultipleX(Environment x, const std::vector<int64_t>& covariateId, const std::vector<int64_t>& rowId, const std::vector<double>& covariateValue, const bool checkCovariateIds, const bool checkCovariateBounds, const bool append, const bool forceSparse);
RcppExport SEXP _Cyclops_cyclopsLoadDataMultipleX(SEXP xSEXP, SEXP covariateIdSEXP, SEXP rowIdSEXP, SEXP covariateValueSEXP, SEXP checkCovariateIdsSEXP, SEXP checkCovariateBoundsSEXP, SEXP appendSEXP, SEXP forceSparseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type covariateId(covariateIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type rowId(rowIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type covariateValue(covariateValueSEXP);
    Rcpp::traits::input_parameter< const bool >::type checkCovariateIds(checkCovariateIdsSEXP);
    Rcpp::traits::input_parameter< const bool >::type checkCovariateBounds(checkCovariateBoundsSEXP);
    Rcpp::traits::input_parameter< const bool >::type append(appendSEXP);
    Rcpp::traits::input_parameter< const bool >::type forceSparse(forceSparseSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsLoadDataMultipleX(x, covariateId, rowId, covariateValue, checkCovariateIds, checkCovariateBounds, append, forceSparse));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsLoadDataX
int cyclopsLoadDataX(Environment x, const int64_t covariateId, const std::vector<int64_t>& rowId, const std::vector<double>& covariateValue, const bool replace, const bool append, const bool forceSparse);
RcppExport SEXP _Cyclops_cyclopsLoadDataX(SEXP xSEXP, SEXP covariateIdSEXP, SEXP rowIdSEXP, SEXP covariateValueSEXP, SEXP replaceSEXP, SEXP appendSEXP, SEXP forceSparseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int64_t >::type covariateId(covariateIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type rowId(rowIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type covariateValue(covariateValueSEXP);
    Rcpp::traits::input_parameter< const bool >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< const bool >::type append(appendSEXP);
    Rcpp::traits::input_parameter< const bool >::type forceSparse(forceSparseSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsLoadDataX(x, covariateId, rowId, covariateValue, replace, append, forceSparse));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsAppendSqlData
int cyclopsAppendSqlData(Environment x, const std::vector<int64_t>& oStratumId, const std::vector<int64_t>& oRowId, const std::vector<double>& oY, const std::vector<double>& oTime, const std::vector<int64_t>& cRowId, const std::vector<int64_t>& cCovariateId, const std::vector<double>& cCovariateValue);
RcppExport SEXP _Cyclops_cyclopsAppendSqlData(SEXP xSEXP, SEXP oStratumIdSEXP, SEXP oRowIdSEXP, SEXP oYSEXP, SEXP oTimeSEXP, SEXP cRowIdSEXP, SEXP cCovariateIdSEXP, SEXP cCovariateValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type oStratumId(oStratumIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type oRowId(oRowIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type oY(oYSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type oTime(oTimeSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type cRowId(cRowIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type cCovariateId(cCovariateIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type cCovariateValue(cCovariateValueSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsAppendSqlData(x, oStratumId, oRowId, oY, oTime, cRowId, cCovariateId, cCovariateValue));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsGetInterceptLabel
SEXP cyclopsGetInterceptLabel(Environment x);
RcppExport SEXP _Cyclops_cyclopsGetInterceptLabel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsGetInterceptLabel(x));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsReadFileData
List cyclopsReadFileData(const std::string& fileName, const std::string& modelTypeName);
RcppExport SEXP _Cyclops_cyclopsReadFileData(SEXP fileNameSEXP, SEXP modelTypeNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsReadFileData(fileName, modelTypeName));
    return rcpp_result_gen;
END_RCPP
}
// cyclopsModelData
List cyclopsModelData(SEXP pid, SEXP y, SEXP z, SEXP offs, SEXP dx, SEXP sx, SEXP ix, const std::string& modelTypeName, bool useTimeAsOffset, int numTypes);
RcppExport SEXP _Cyclops_cyclopsModelData(SEXP pidSEXP, SEXP ySEXP, SEXP zSEXP, SEXP offsSEXP, SEXP dxSEXP, SEXP sxSEXP, SEXP ixSEXP, SEXP modelTypeNameSEXP, SEXP useTimeAsOffsetSEXP, SEXP numTypesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pid(pidSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type z(zSEXP);
    Rcpp::traits::input_parameter< SEXP >::type offs(offsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sx(sxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP);
    Rcpp::traits::input_parameter< bool >::type useTimeAsOffset(useTimeAsOffsetSEXP);
    Rcpp::traits::input_parameter< int >::type numTypes(numTypesSEXP);
    rcpp_result_gen = Rcpp::wrap(cyclopsModelData(pid, y, z, offs, dx, sx, ix, modelTypeName, useTimeAsOffset, numTypes));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Cyclops_bySum", (DL_FUNC) &_Cyclops_bySum, 2},
    {"_Cyclops_cyclopsGetModelTypeNames", (DL_FUNC) &_Cyclops_cyclopsGetModelTypeNames, 0},
    {"_Cyclops_cyclopsGetRemoveInterceptNames", (DL_FUNC) &_Cyclops_cyclopsGetRemoveInterceptNames, 0},
    {"_Cyclops_cyclopsGetIsSurvivalNames", (DL_FUNC) &_Cyclops_cyclopsGetIsSurvivalNames, 0},
    {"_Cyclops_cyclopsGetUseOffsetNames", (DL_FUNC) &_Cyclops_cyclopsGetUseOffsetNames, 0},
    {"_Cyclops_cyclopsGetComputeDevice", (DL_FUNC) &_Cyclops_cyclopsGetComputeDevice, 1},
    {"_Cyclops_cyclopsSetBeta", (DL_FUNC) &_Cyclops_cyclopsSetBeta, 2},
    {"_Cyclops_cyclopsSetFixedBeta", (DL_FUNC) &_Cyclops_cyclopsSetFixedBeta, 3},
    {"_Cyclops_cyclopsGetIsRegularized", (DL_FUNC) &_Cyclops_cyclopsGetIsRegularized, 2},
    {"_Cyclops_cyclopsSetWeights", (DL_FUNC) &_Cyclops_cyclopsSetWeights, 2},
    {"_Cyclops_cyclopsGetPredictiveLogLikelihood", (DL_FUNC) &_Cyclops_cyclopsGetPredictiveLogLikelihood, 2},
    {"_Cyclops_cyclopsGetLogLikelihood", (DL_FUNC) &_Cyclops_cyclopsGetLogLikelihood, 1},
    {"_Cyclops_cyclopsGetFisherInformation", (DL_FUNC) &_Cyclops_cyclopsGetFisherInformation, 2},
    {"_Cyclops_cyclopsSetPrior", (DL_FUNC) &_Cyclops_cyclopsSetPrior, 6},
    {"_Cyclops_cyclopsProfileModel", (DL_FUNC) &_Cyclops_cyclopsProfileModel, 6},
    {"_Cyclops_cyclopsPredictModel", (DL_FUNC) &_Cyclops_cyclopsPredictModel, 1},
    {"_Cyclops_cyclopsSetControl", (DL_FUNC) &_Cyclops_cyclopsSetControl, 22},
    {"_Cyclops_cyclopsRunCrossValidationl", (DL_FUNC) &_Cyclops_cyclopsRunCrossValidationl, 1},
    {"_Cyclops_cyclopsFitModel", (DL_FUNC) &_Cyclops_cyclopsFitModel, 1},
    {"_Cyclops_cyclopsLogModel", (DL_FUNC) &_Cyclops_cyclopsLogModel, 1},
    {"_Cyclops_cyclopsInitializeModel", (DL_FUNC) &_Cyclops_cyclopsInitializeModel, 4},
    {"_Cyclops_listOpenCLDevices", (DL_FUNC) &_Cyclops_listOpenCLDevices, 0},
    {"_Cyclops_getDefaultOpenCLDevice", (DL_FUNC) &_Cyclops_getDefaultOpenCLDevice, 0},
    {"_Cyclops_isSorted", (DL_FUNC) &_Cyclops_isSorted, 3},
    {"_Cyclops_isSortedVectorList", (DL_FUNC) &_Cyclops_isSortedVectorList, 2},
    {"_Cyclops_cyclopsPrintRowIds", (DL_FUNC) &_Cyclops_cyclopsPrintRowIds, 1},
    {"_Cyclops_isRcppPtrNull", (DL_FUNC) &_Cyclops_isRcppPtrNull, 1},
    {"_Cyclops_cyclopsGetNumberOfStrata", (DL_FUNC) &_Cyclops_cyclopsGetNumberOfStrata, 1},
    {"_Cyclops_cyclopsGetCovariateIds", (DL_FUNC) &_Cyclops_cyclopsGetCovariateIds, 1},
    {"_Cyclops_cyclopsGetCovariateType", (DL_FUNC) &_Cyclops_cyclopsGetCovariateType, 2},
    {"_Cyclops_cyclopsGetNumberOfColumns", (DL_FUNC) &_Cyclops_cyclopsGetNumberOfColumns, 1},
    {"_Cyclops_cyclopsGetNumberOfRows", (DL_FUNC) &_Cyclops_cyclopsGetNumberOfRows, 1},
    {"_Cyclops_cyclopsGetNumberOfTypes", (DL_FUNC) &_Cyclops_cyclopsGetNumberOfTypes, 1},
    {"_Cyclops_cyclopsUnivariableCorrelation", (DL_FUNC) &_Cyclops_cyclopsUnivariableCorrelation, 2},
    {"_Cyclops_cyclopsSumByGroup", (DL_FUNC) &_Cyclops_cyclopsSumByGroup, 4},
    {"_Cyclops_cyclopsSumByStratum", (DL_FUNC) &_Cyclops_cyclopsSumByStratum, 3},
    {"_Cyclops_cyclopsSum", (DL_FUNC) &_Cyclops_cyclopsSum, 3},
    {"_Cyclops_cyclopsNewSqlData", (DL_FUNC) &_Cyclops_cyclopsNewSqlData, 2},
    {"_Cyclops_cyclopsMedian", (DL_FUNC) &_Cyclops_cyclopsMedian, 1},
    {"_Cyclops_cyclopsQuantile", (DL_FUNC) &_Cyclops_cyclopsQuantile, 2},
    {"_Cyclops_cyclopsNormalizeCovariates", (DL_FUNC) &_Cyclops_cyclopsNormalizeCovariates, 2},
    {"_Cyclops_cyclopsSetHasIntercept", (DL_FUNC) &_Cyclops_cyclopsSetHasIntercept, 2},
    {"_Cyclops_cyclopsGetHasIntercept", (DL_FUNC) &_Cyclops_cyclopsGetHasIntercept, 1},
    {"_Cyclops_cyclopsGetHasOffset", (DL_FUNC) &_Cyclops_cyclopsGetHasOffset, 1},
    {"_Cyclops_cyclopsGetMeanOffset", (DL_FUNC) &_Cyclops_cyclopsGetMeanOffset, 1},
    {"_Cyclops_cyclopsFinalizeData", (DL_FUNC) &_Cyclops_cyclopsFinalizeData, 7},
    {"_Cyclops_cyclopsLoadDataY", (DL_FUNC) &_Cyclops_cyclopsLoadDataY, 5},
    {"_Cyclops_cyclopsLoadDataMultipleX", (DL_FUNC) &_Cyclops_cyclopsLoadDataMultipleX, 8},
    {"_Cyclops_cyclopsLoadDataX", (DL_FUNC) &_Cyclops_cyclopsLoadDataX, 7},
    {"_Cyclops_cyclopsAppendSqlData", (DL_FUNC) &_Cyclops_cyclopsAppendSqlData, 8},
    {"_Cyclops_cyclopsGetInterceptLabel", (DL_FUNC) &_Cyclops_cyclopsGetInterceptLabel, 1},
    {"_Cyclops_cyclopsReadFileData", (DL_FUNC) &_Cyclops_cyclopsReadFileData, 2},
    {"_Cyclops_cyclopsModelData", (DL_FUNC) &_Cyclops_cyclopsModelData, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_Cyclops(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

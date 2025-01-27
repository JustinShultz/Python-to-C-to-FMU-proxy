/* Initialization */
/* Simulation code for ExternalLibraries_working generated by the OpenModelica Compiler v1.9.3. */

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_xml.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <assert.h>
#include <string.h>

#include "ExternalLibraries_working_functions.h"
#include "ExternalLibraries_working_model.h"
#include "ExternalLibraries_working_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif
#include "ExternalLibraries_working_11mix.h"
#include "ExternalLibraries_working_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 1
 type: SIMPLE_ASSIGN
 y = 2.0
 */
void ExternalLibraries_working_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  $Py = 2.0;
  TRACE_POP
}
/*
 equation index: 2
 type: SIMPLE_ASSIGN
 der(y) = -ExternalLibraries_working.ExternalFunc2(y)
 */
void ExternalLibraries_working_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  $P$DER$Py = (-omc_ExternalLibraries__working_ExternalFunc2(threadData, $Py));
  TRACE_POP
}


int ExternalLibraries_working_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  
  data->simulationInfo.discreteCall = 1;
  ExternalLibraries_working_eqFunction_1(data, threadData);

  ExternalLibraries_working_eqFunction_2(data, threadData);
  data->simulationInfo.discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int ExternalLibraries_working_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}

/* funtion initialize mixed systems */
void ExternalLibraries_working_initialMixedSystem(int nMixedSystems, MIXED_SYSTEM_DATA* mixedSystemData)
{
  /* initial mixed systems */
  /* parameter mixed systems */
  /* model mixed systems */
  /* jacobians mixed systems */
}

#if defined(__cplusplus)
}
#endif


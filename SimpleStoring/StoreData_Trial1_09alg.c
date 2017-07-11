/* Algebraic */
/* Simulation code for StoreData_Trial1 generated by the OpenModelica Compiler v1.9.3. */

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

#include "StoreData_Trial1_functions.h"
#include "StoreData_Trial1_model.h"
#include "StoreData_Trial1_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* for continuous time variables */
int StoreData_Trial1_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  /* no Alg systems */

  StoreData_Trial1_function_savePreSynchronous(data, threadData);
  
  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif

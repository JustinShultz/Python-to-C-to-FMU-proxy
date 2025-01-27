/* Synchronous systems */
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
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the clocks of model. */
void ExternalLibraries_working_function_initSynchronous(DATA *data, threadData_t *threadData)
{
  long i=0, j=0;
}

/* Update the base clock. */
void ExternalLibraries_working_function_updateSynchronous(DATA *data, threadData_t *threadData, long i)
{
  modelica_boolean ret;
  switch (i) {
    default:
      throwStreamPrint(NULL, "Internal Error: unknown base partition %ld", i);
      break;
  }
}



/*Clocked systems equations */
int ExternalLibraries_working_function_equationsSynchronous(DATA *data, threadData_t *threadData, long i)
{
  int ret;
  TRACE_PUSH

  switch (i) {
    default:
      throwStreamPrint(NULL, "Internal Error: unknown sub partition %ld", i);
      ret = 1;
      break;
  }

  TRACE_POP
  return ret;
}

/* $P$PRE%v% = %v% */
void ExternalLibraries_working_function_savePreSynchronous(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
}

#if defined(__cplusplus)
}
#endif


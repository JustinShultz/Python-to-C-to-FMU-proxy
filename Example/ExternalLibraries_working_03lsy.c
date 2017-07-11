/* Linear Systems */
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
#include "ExternalLibraries_working_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* initial linear systems */
/* parameter linear systems */
/* model linear systems */
/* jacobians linear systems */

/* funtion initialize linear systems */
void ExternalLibraries_working_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* initial linear systems */
  /* parameter linear systems */
  /* model linear systems */
  /* jacobians linear systems */
}

#if defined(__cplusplus)
}
#endif


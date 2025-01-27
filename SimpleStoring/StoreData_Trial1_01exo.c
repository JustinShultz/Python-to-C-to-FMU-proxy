/* External objects file */
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
#if defined(__cplusplus)
extern "C" {
#endif

/* Has to be performed after _init.xml file has been read */
void StoreData_Trial1_callExternalObjectConstructors(DATA *data, threadData_t *threadData)
{
  /* data->simulationInfo.extObjs = NULL; */
  infoStreamPrint(LOG_DEBUG, 0, "call external Object Constructors");
  infoStreamPrint(LOG_DEBUG, 0, "call external Object Constructors finished");
}

void StoreData_Trial1_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo.extObjs)
  {
    free(data->simulationInfo.extObjs);
    data->simulationInfo.extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif


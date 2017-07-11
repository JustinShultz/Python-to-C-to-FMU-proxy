/* Simulation code for StoreData_Trial1 generated by the OpenModelica Compiler v1.9.3. */
/* States */
/* x */
#define _$Px(i) data->localData[i]->realVars[0]
#define $Px _$Px(0)
#define $P$PRE$Px data->simulationInfo.realVarsPre[0]
#define $P$ATTRIBUTE$Px data->modelData.realVarsData[0].attribute
#define $P$ATTRIBUTE$P$PRE$Px $P$ATTRIBUTE$Px
#define $Px__varInfo data->modelData.realVarsData[0].info
#define $P$PRE$Px__varInfo data->modelData.realVarsData[0].info
#define _$P$PRE$Px(i) $P$PRE$Px


/* StatesDerivatives */
/* der(x) */
#define _$P$DER$Px(i) data->localData[i]->realVars[1]
#define $P$DER$Px _$P$DER$Px(0)
#define $P$PRE$P$DER$Px data->simulationInfo.realVarsPre[1]
#define $P$ATTRIBUTE$P$DER$Px data->modelData.realVarsData[1].attribute
#define $P$ATTRIBUTE$P$PRE$P$DER$Px $P$ATTRIBUTE$P$DER$Px
#define $P$DER$Px__varInfo data->modelData.realVarsData[1].info
#define $P$PRE$P$DER$Px__varInfo data->modelData.realVarsData[1].info
#define _$P$PRE$P$DER$Px(i) $P$PRE$P$DER$Px


/* Non Discrete Real Algebraic Vars */

/* Discrete Real Algebraic Vars */

/* Nonlinear Constraints For Dyn. Optimization */

/* Nonlinear Final Constraints For Dyn. Optimization */

/* Algebraic Parameter */

/* External Objects */

/* Algebraic Integer Vars */

/* Algebraic Integer Parameter */

/* Algebraic Boolean Vars */

/* Algebraic Boolean Parameters */

/* Algebraic String Variables */

/* Algebraic String Parameter */

/* sample */

#define StoreData__Trial1_storeData_index 0

extern void StoreData_Trial1_callExternalObjectConstructors(DATA *data, threadData_t *threadData);
extern void StoreData_Trial1_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
extern void StoreData_Trial1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
extern void StoreData_Trial1_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA *data);
extern void StoreData_Trial1_initialMixedSystem(int nMixedSystems, MIXED_SYSTEM_DATA *data);
extern void StoreData_Trial1_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
extern int StoreData_Trial1_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_checkForAsserts(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int StoreData_Trial1_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern int StoreData_Trial1_checkForDiscreteChanges(DATA *data, threadData_t *threadData);
extern const char* StoreData_Trial1_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* StoreData_Trial1_relationDescription(int i);
extern void StoreData_Trial1_function_initSample(DATA *data, threadData_t *threadData);
extern int StoreData_Trial1_initialAnalyticJacobianG(void* data, threadData_t *threadData);
extern int StoreData_Trial1_initialAnalyticJacobianA(void* data, threadData_t *threadData);
extern int StoreData_Trial1_initialAnalyticJacobianB(void* data, threadData_t *threadData);
extern int StoreData_Trial1_initialAnalyticJacobianC(void* data, threadData_t *threadData);
extern int StoreData_Trial1_initialAnalyticJacobianD(void* data, threadData_t *threadData);
extern int StoreData_Trial1_functionJacG_column(void* data, threadData_t *threadData);
extern int StoreData_Trial1_functionJacA_column(void* data, threadData_t *threadData);
extern int StoreData_Trial1_functionJacB_column(void* data, threadData_t *threadData);
extern int StoreData_Trial1_functionJacC_column(void* data, threadData_t *threadData);
extern int StoreData_Trial1_functionJacD_column(void* data, threadData_t *threadData);
extern const char* StoreData_Trial1_linear_model_frame(void);
extern int StoreData_Trial1_mayer(DATA* data, modelica_real** res, short *);
extern int StoreData_Trial1_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int StoreData_Trial1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int StoreData_Trial1_setInputData(DATA *data, const modelica_boolean file);
extern int StoreData_Trial1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void StoreData_Trial1_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void StoreData_Trial1_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int StoreData_Trial1_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void StoreData_Trial1_function_savePreSynchronous(DATA *data, threadData_t *threadData);


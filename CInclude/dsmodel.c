/* DSblock model generated by Dymola from Modelica model CallExternalPython
 Dymola Version 2017 (32-bit), 2016-04-12 translated this at Thu Jul 21 17:27:39 2016

   */

#include <matrixop.h>
/* Declaration of C-structs */
/* Prototypes for functions used in model */

#include <Python.h>

void pyRunString(const char *str)
{
  Py_SetProgramName("pyRunString");  /* optional but recommended */
  Py_Initialize();
  PyRun_SimpleString(str);
  Py_Finalize();
}

DYMOLA_STATIC void pyRunString_M(const char*  s0_0);
/* Codes used in model */

/* Flattened Modelica model:

function pyRunString
input String s;

external "C" pyRunString(s);
annotation(Include="
#include <Python.h>

void pyRunString(const char *str)
{
  Py_SetProgramName(\"pyRunString\");  /* optional but recommended * /
  Py_Initialize();
  PyRun_SimpleString(str);
  Py_Finalize();
}
");
end pyRunString;

  */
DYMOLA_STATIC void pyRunString_M(const char*  s0_0) {
  PushContext("pyRunString")
  {
    /* Declare outputs and temporaries */
    /* Start of real code */
    {
      (pyRunString)(s0_0);
      }
    /* Output section */
    PopContext()
    return ;
  }}
/* DSblock C-code: */

#define NX_    0
#define NX2_   0
#define NU_    0
#define NY_    0
#define NW_    0
#define NP_    0
#define NPS_   0
#define MAXAuxStr_   0
#define MAXAuxStrLen_   500
#define NHash1_ 0
#define NHash2_ 0
#define NHash3_ 0
#define NI_    0
#define NRelF_ 0
#define NRel_  0
#define NTim_  0
#define NSamp_ 0
#define NCons_ 0
#define NA_    0
#define SizePre_ 0
#define SizeEq_ 0
#define SizeDelay_ 0
#define QNLmax_ 0
#define MAXAux 0
#define NrDymolaTimers_ 0
#define NWhen_ 0
#define NCheckIf_ 0
#define NGlobalHelp_ 0
#define NGlobalHelpI_ 0
#ifndef NExternalObject_
#define NExternalObject_ 0
#endif
#include <moutil.c>
PreNonAliasDef(0)
PreNonAliasDef(1)
PreNonAliasDef(2)
PreNonAliasDef(3)
PreNonAliasDef(4)
PreNonAliasDef(5)
#if !defined(DYM2CCUR)
 DYMOLA_STATIC const char*modelName="CallExternalPython";
#endif
DYMOLA_STATIC const char*usedLibraries[]={0};
DYMOLA_STATIC const char*dllLibraryPath[]={0};
DYMOLA_STATIC const char*default_dymosim_license_filename=0;
#include <dsblock1.c>

/* Define variable names. */

#define Sections_

TranslatedEquations

BoundParameterSection
InitialSection
InitialSection
InitialStartSection
InitialSection
DefaultSection
InitializeData(0)
InitialSection
InitialSection2
Init_=false;InitializeData(2);Init_=true;
EndInitialSection

OutputSection
  (PushModelContext(1,"pyRunString(\"\nprint 'Python says: simulation time',\"+       String(time, true, 0)+\"\n\")")
    pyRunString_M(StringAdd(StringAdd("\nprint 'Python says: simulation time',",
    Real2String2(DYNTime, true, 0)),"\n")));
  PopAllMarks();

DynamicsSection

AcceptedSection1

AcceptedSection2

DefaultSection
InitializeData(1)
EndTranslatedEquations

#include <dsblock6.c>

PreNonAliasNew(0)
StartNonAlias(0)
EndNonAlias(0)

#define DymolaHaveUpdateInitVars 1
#include <dsblock5.c>

DYMOLA_STATIC void UpdateInitVars(double*time, double* X_, double* XD_, double* U_, double* DP_, int IP_[], Dymola_bool LP_[], double* F_, double* Y_, double* W_, double QZ_[], double duser_[], int iuser_[], void*cuser_[],struct DYNInstanceData*did_) {
static Real initStore[1];
}
StartDataBlock
EndDataBlock
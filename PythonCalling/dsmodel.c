/* DSblock model generated by Dymola from Modelica model WrapperExtFunc_CallPython
 Dymola Version 2017 (32-bit), 2016-04-12 translated this at Tue Aug 09 11:41:40 2016

   */

#include <matrixop.h>
/* Declaration of C-structs */
/* Prototypes for functions used in model */
DYMOLA_STATIC double   DLLCallPython(double  x0_0, double  y0_0);
/* Codes used in model */

/* Flattened Modelica model:

function ExternalFunc_CallPython.DLLCallPython
discrete input Real x;
discrete input Real y;
discrete output Real z;

external "C" z = DLLCallPython(x, y);
annotation(Library={"DLLCallPython"}, LibraryDirectory="C:/Users/justin.shultz/Dropbox/FMU/Passing_Data_Testing/PythonCalling");
end ExternalFunc_CallPython.DLLCallPython;

  */
/* DSblock C-code: */

#define NX_    0
#define NX2_   0
#define NU_    0
#define NY_    0
#define NW_    4
#define NP_    2
#define NPS_   0
#define MAXAuxStr_   0
#define MAXAuxStrLen_   500
#define NHash1_ 877315935
#define NHash2_ 688231194
#define NHash3_ 0
#define NI_    0
#define NRelF_ 0
#define NRel_  0
#define NTim_  1
#define NSamp_ 0
#define NCons_ 0
#define NA_    1
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
 DYMOLA_STATIC const char*modelName="WrapperExtFunc_CallPython";
#endif
DYMOLA_STATIC const char*usedLibraries[]={0};
DYMOLA_STATIC const char*dllLibraryPath[]={0};
DYMOLA_STATIC const char*default_dymosim_license_filename=0;
#include <dsblock1.c>

/* Define variable names. */

#define Sections_

TranslatedEquations

InitialSection
#if defined(DynSimStruct) || defined(BUILDFMU)
DYNX(W_,0) = 5;
DYNX(W_,2) = 5.0;
#endif
BoundParameterSection
InitialSection
#if defined(DynSimStruct) || defined(BUILDFMU)
DYNX(W_,1) = 0;
#endif
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

DynamicsSection

AcceptedSection1

AcceptedSection2
DYNX(W_,1) = DYNX(DP_,0)+(IF LessTime(DYNX(DP_,1), 0) THEN 0 ELSE DYNTime-
  DYNX(DP_,1));
DYNX(W_,3) = (PushModelContext(1,"ExternalFunc_CallPython.DLLCallPython(externalFunc_CallPython.x, 5.0)")
  DLLCallPython(DYNX(W_,1), 5.0));
PopModelContext();

DefaultSection
InitializeData(1)
EndTranslatedEquations

#include <dsblock6.c>

PreNonAliasNew(0)
StartNonAlias(0)
DeclareVariable("y", "", 5, 0.0,0.0,0.0,0,513)
DeclareVariable("externalFunc_CallPython.x", "[s]", 0, 0.0,0.0,0.0,0,512)
DeclareVariable("externalFunc_CallPython.y", "", 5.0, 0.0,0.0,0.0,0,513)
DeclareVariable("externalFunc_CallPython.z", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("clock.offset", "Offset of output signal [s]", 0, 0, 0.0,0.0,\
0.0,0,560)
DeclareParameter("clock.startTime", "Output = offset for time < startTime [s]", 1,\
 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("clock.y", "Connector of Real output signal [s]", "externalFunc_CallPython.x", 1,\
 5, 1, 0)
EndNonAlias(0)

#define DymolaHaveUpdateInitVars 1
#include <dsblock5.c>

DYMOLA_STATIC void UpdateInitVars(double*time, double* X_, double* XD_, double* U_, double* DP_, int IP_[], Dymola_bool LP_[], double* F_, double* Y_, double* W_, double QZ_[], double duser_[], int iuser_[], void*cuser_[],struct DYNInstanceData*did_) {
static Real initStore[1];
}
StartDataBlock
EndDataBlock

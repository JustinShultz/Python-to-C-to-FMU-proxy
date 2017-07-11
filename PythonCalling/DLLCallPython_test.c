//DLLCallPython_test.c
//Altered version of runDLLtest5.c to work with Modelica model
//Allows arguments to be passed to Python script being called 
//Currently takes in only integers to be passed to add_func.py's add function
//Testing different inputs: changed from int argc and const char* argv[]
//to double x and double y


#include <stdio.h>
#include <windows.h>

//created datatype: pointer to a function that takes two integers as arguments
typedef void (CALLBACK* DLLFUNC1)();	
typedef void* (CALLBACK* DLLFUNC2)(char*);
typedef void* (CALLBACK* DLLFUNC3)(void*);	//void* - points to non-specific var type (PyObject)
typedef void* (CALLBACK* DLLFUNC4)(void*,char*);
typedef int (CALLBACK* DLLFUNC5)(void*);
typedef void (CALLBACK* DLLFUNC6)(void*);
typedef void* (CALLBACK* DLLFUNC7)(void*,void*);
typedef void* (CALLBACK* DLLFUNC8)(int);
typedef void* (CALLBACK* DLLFUNC9)(long);
typedef int (CALLBACK* DLLFUNC10)(void*,int,void*);
typedef long (CALLBACK* DLLFUNC11)(void*);
typedef void* (CALLBACK* DLLFUNC12)(double);
typedef double (CALLBACK* DLLFUNC13)(void*);

double DLLCallPython_test(double x, double y){
	HINSTANCE hDLL;								//stores base address of the module
	DLLFUNC1 DllFunc1;	//Py_Initialize			//stores pointer to a funciton
	DLLFUNC2 DllFunc2;	//PyString_FromString - I:char* 			O:PyObject*
	DLLFUNC2 DllFunc3;	//PyImport_Import - 	I:char* 			O:PyObject*
	DLLFUNC3 DllFunc4;	//PyModule_GetDict - 	I:PyObject* 		O:PyObject*
	DLLFUNC4 DllFunc5;	//PyDict_GetItemString - I:PyObject*,char* 	O:PyObject*
	DLLFUNC5 DllFunc6;	//PyCallable_Check - 	I:PyObject* 		O:int
	DLLFUNC7 DllFunc7;	//PyObject_CallObject - I:PyObject*,PyObject* O:Pyobject* 
	DLLFUNC1 DllFunc8;	//PyErr_Print - 		I:void 				O:void
	DLLFUNC6 DllFunc9;	//Py_DECREF - 			I:PyObject* 		O:void
	DLLFUNC1 DllFunc10;	//Py_Finalize - 		I:void 				O:void
	DLLFUNC8 DllFunc11; //PyTuple_New - 		I:int 				O:PyObject*
	DLLFUNC9 DllFunc12; //PyInt_FromLong - 		I:long 				O:PyObject*
	DLLFUNC10 DllFunc13;//PyTuple_SetItem - 	I:PyObject*,Py_ssize_t,PyObject* O:int
	DLLFUNC11 DllFunc14;//PyInt_AsLong - 		I:PyObject*			O:Long
	DLLFUNC12 DllFunc15;//PyFloat_FromDouble -  I:double 			O:PyObject*
	DLLFUNC13 DllFunc16;//PyFloat_AsDouble - 	I:PyObject* 		O:double
	void *pName, *pModule, *pDict, *pFunc, *pArgs, *pValue, *pFinal;
	int i;

	//Only for test:
	double args[2] = {x,y};

	double doub;
	int integ;

	/*if(argc < 3){
		printf("Usage: exe_name python_source function_name\n");
		return 1;
	}*/
	
	hDLL = LoadLibrary("python27.dll");	//retrieves base address of file
	if (hDLL != NULL){					//checks that LoadLibrary was successful
		//retrieve address of a function, given address of module and name of function
		DllFunc1 = (DLLFUNC1)GetProcAddress(hDLL,"Py_Initialize");	
		DllFunc2 = (DLLFUNC2)GetProcAddress(hDLL,"PyString_FromString");
		DllFunc3 = (DLLFUNC2)GetProcAddress(hDLL,"PyImport_Import");
		DllFunc4 = (DLLFUNC3)GetProcAddress(hDLL,"PyModule_GetDict");
		DllFunc5 = (DLLFUNC4)GetProcAddress(hDLL,"PyDict_GetItemString");
		DllFunc6 = (DLLFUNC5)GetProcAddress(hDLL,"PyCallable_Check");
		DllFunc7 = (DLLFUNC7)GetProcAddress(hDLL,"PyObject_CallObject");
		DllFunc8 = (DLLFUNC1)GetProcAddress(hDLL,"PyErr_Print");
		DllFunc9 = (DLLFUNC6)GetProcAddress(hDLL,"Py_XDECREF");
		DllFunc10 = (DLLFUNC1)GetProcAddress(hDLL,"Py_Finalize");
		DllFunc11 = (DLLFUNC8)GetProcAddress(hDLL,"PyTuple_New");
		DllFunc12 = (DLLFUNC9)GetProcAddress(hDLL,"PyInt_FromLong");
		DllFunc13 = (DLLFUNC10)GetProcAddress(hDLL,"PyTuple_SetItem");
		DllFunc14 = (DLLFUNC11)GetProcAddress(hDLL,"PyInt_AsLong");
		DllFunc15 = (DLLFUNC12)GetProcAddress(hDLL,"PyFloat_FromDouble");
		DllFunc16 = (DLLFUNC13)GetProcAddress(hDLL,"PyFloat_AsDouble");

		if(!DllFunc1 && !DllFunc2 && !DllFunc3 && !DllFunc4 && !DllFunc5 
			&& !DllFunc6 && !DllFunc7 && !DllFunc8 && !DllFunc9 && !DllFunc10 
			&&!DllFunc11 && !DllFunc12 && !DllFunc13 && !DllFunc14){
			printf("Functions were not found\n");
			//return 0;
		}
		else{
			//printf("Functions were found\n");
			
			/*SCRIPT CALLING CODE*/
			//Initialize the Python Interpreter
			DllFunc1();

			//Convert the name of the python file into a python string
			//CHANGE: permanent python_source written in
			pName = DllFunc2("add_func");

			//Imports the python file as a module
			pModule = DllFunc3(pName);

			//Sets up contents of module in a dictionary data structure
			pDict = DllFunc4(pModule);

			//Retrieves function from dictionary based on command line input
			//CHANGE: permanent function_name written in
			pFunc = DllFunc5(pDict, "add");

			//Checks that pFunc is callable
			if(DllFunc6(pFunc)){
				//ARGUMENT CODE
				//Prepare argument list for call
				pArgs = DllFunc11(2);
				for(i=0; i<2; i++){
					//pValue = DllFunc12(args[i]);
					pValue = DllFunc15(args[i]);
					if(!pValue){
						DllFunc8();
						return 1;
					}
					DllFunc13(pArgs, i, pValue);
				}
				//DllFunc14 takes Python integer value and converts to long value
				//integ = DllFunc14(DllFunc7(pFunc,pArgs));
				//DllFUnc16 takes Python float and converts to double value
				doub = DllFunc16(DllFunc7(pFunc,pArgs));
				printf("doub: %f", doub);
				
				/*
				//CHANGE: number of arguments altered from 3 to 1
				if(argc > 1){
					pArgs = DllFunc11(argc - 1);
					for(i = 0; i < argc-1; i++){
						pValue = DllFunc12(atoi(argv[i+1]));  //DllFunc12 turns int into void*
						if(!pValue){
							DllFunc8();
							return 1;
						}
						DllFunc13(pArgs, i, pValue);
					}
					//example code stores result of called function 
					//pValue = DllFunc7(pFunc,pArgs);
					//instead function is just called and not stored
					DllFunc7(pFunc,pArgs);

					if(pArgs != NULL){
						//DllFunc9(pArgs);
					}
				}
				else{
					//example code stores result of called function
					//pValue = DllFunc7(pFunc,NULL);
					//instead function is just called and not stored
					DllFunc7(pFunc,NULL);
				}
				

				if(pValue != NULL){
					//printf("Return of call: %d\n",DllFunc14(pValue));
					//DllFunc9(pValue);
				}
				else{
					DllFunc8();
				}
				*/
			}
			else{
				//Print error
				DllFunc8();
			}

			//DllFunc9(pModule);	//Py_DECREF and Py_XDECREF causes program to crash
			//DllFunc9(pName);		//Does not know what to dereference due to void pointer

			//PyFinalize
			DllFunc10();
			return doub;

		}
	}
	else{
		printf("Library was not found\n");
		return 0;
	}
	return 0;
}

/*int main(int argc, char *argv[]){
	//%f is used to print doubles, %d is used to print int
	printf("\nFinal answer:%f",DLLCallPython_test(1000.234,5000.987));
	//return 0;
}*/
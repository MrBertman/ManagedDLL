// Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#import "..\COMLib\bin\Debug\COMLib.tlb" raw_interfaces_only
using namespace COMLib;

int main()
{
	
	// Initialize COM.
	HRESULT hr = CoInitialize(NULL);

	// Create the interface pointer.
	ICalcPtr pICalc(__uuidof(Calc));

	long lResult = 0;

	BSTR bstrStatus = ::SysAllocString(L"+");

	// Call the Add method.
	pICalc->Count(5, 10, bstrStatus, &lResult);

	wprintf(L"The result is %d\n", lResult);


	// Uninitialize COM.
	CoUninitialize();
	::SysFreeString(bstrStatus);
	
	system("pause>>void");

	return 0;
}


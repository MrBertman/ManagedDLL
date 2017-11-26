#include "stdafx.h"
#include "CppUnitTest.h"
#import "..\COMLib\bin\Debug\COMLib.tlb" raw_interfaces_only
using namespace COMLib;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace COMDllTests
{		
	TEST_CLASS(CalcDllTests)
	{
	public:
		TEST_METHOD(AddTest)
		{
			// Initialize COM.
			HRESULT hr = CoInitialize(NULL);

			// Create the interface pointer.
			ICalcPtr pICalc(__uuidof(Calc));

			long lResult = 0;
			long exp = 15;

			BSTR bstrStatus = ::SysAllocString(L"+");

			// Call the Add method.
			pICalc->Count(5, 10, bstrStatus, &lResult);
			Assert::AreEqual(exp, lResult);

			CoUninitialize();
			::SysFreeString(bstrStatus);
		}

		TEST_METHOD(SubTest)
		{
			// Initialize COM.
			HRESULT hr = CoInitialize(NULL);

			// Create the interface pointer.
			ICalcPtr pICalc(__uuidof(Calc));

			long lResult = 0;
			long exp = 4;

			BSTR bstrStatus = ::SysAllocString(L"-");

			// Call the Add method.
			pICalc->Count(7, 3, bstrStatus, &lResult);
			Assert::AreEqual(exp, lResult);

			CoUninitialize();
			::SysFreeString(bstrStatus);
		}

		TEST_METHOD(MulTest)
		{
			// Initialize COM.
			HRESULT hr = CoInitialize(NULL);

			// Create the interface pointer.
			ICalcPtr pICalc(__uuidof(Calc));

			long lResult = 0;
			long exp = 50;

			BSTR bstrStatus = ::SysAllocString(L"*");

			// Call the Add method.
			pICalc->Count(5, 10, bstrStatus, &lResult);
			Assert::AreEqual(exp, lResult);

			CoUninitialize();
			::SysFreeString(bstrStatus);
		}

		TEST_METHOD(DivTest)
		{
			// Initialize COM.
			HRESULT hr = CoInitialize(NULL);

			// Create the interface pointer.
			ICalcPtr pICalc(__uuidof(Calc));

			long lResult = 0;
			long exp = 2;

			BSTR bstrStatus = ::SysAllocString(L"/");

			// Call the Add method.
			pICalc->Count(10, 5, bstrStatus, &lResult);
			Assert::AreEqual(exp, lResult);

			CoUninitialize();
			::SysFreeString(bstrStatus);
		}
	};
}
#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AhirbakievAR.Sprint0.Task4.V1.Lib/Tyuiu.AhirbakievAR.Sprint0.Task4.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAhirbakievARSprint0Task4V1Test
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task4* date = new Service2();
			int a = 4;
			int b = 2;
			int c = 3;
			int d = 6;
			int e;
			//run
			e = date->Calculate(a, b, c, d);
			// Valid
			Assert::AreEqual(1, e);
		}
	};
}

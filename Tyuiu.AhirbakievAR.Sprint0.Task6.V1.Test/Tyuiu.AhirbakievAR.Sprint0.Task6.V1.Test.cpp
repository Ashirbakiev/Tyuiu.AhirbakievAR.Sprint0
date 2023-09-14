#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AhirbakievAR.Sprint0.Task6.V1.Lib/Tyuiu.AhirbakievAR.Sprint0.Task6.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAhirbakievARSprint0Task6V1Test
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task6* date = new Service();
			double a = 9;
			double b = 3;
			double d;
			//run
			d = date->Calculate(a, b);
			// Valid
			Assert::AreEqual(7.0, d);
		}
	};
}

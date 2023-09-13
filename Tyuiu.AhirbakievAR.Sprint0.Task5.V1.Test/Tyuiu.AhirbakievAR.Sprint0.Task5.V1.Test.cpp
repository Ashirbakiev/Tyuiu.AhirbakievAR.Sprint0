#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AhirbakievAR.Sprint0.Task5.V1.Lib/Tyuiu.AhirbakievAR.Sprint0.Task5.V1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAhirbakievARSprint0Task5V1Test
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task5* date = new Service();
			double a = 9;
			double b = 7.5;
			double c = 5;
			double d;
			//run
			d = date->Zadacha(a, b, c);
			// Valid
			Assert::AreEqual(337.5, d);
		}
	};
}

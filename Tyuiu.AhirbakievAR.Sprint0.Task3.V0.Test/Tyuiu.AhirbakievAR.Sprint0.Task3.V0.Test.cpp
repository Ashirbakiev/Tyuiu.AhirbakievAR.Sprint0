#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AhirbakievAR.Sprint0.Task3.V0.Lib/Tyuiu.AhirbakievAR.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAhirbakievARSprint0Task3V0Test
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task3* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d;
			//run
			d = date->SummV3(a, b, c);
			// Valid
			Assert::AreEqual(12, d);

		}
	};
}

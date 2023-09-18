#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AhirbakievAR.Sprint0.Task7.V1.Lib/Tyuiu.AhirbakievAR.Sprint0.Task7.V1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAhirbakievARSprint0Task7V1Test
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* date = new Service();
			int a = 123;
			int b = 2;
			bool n = date->Rezalt(a, b);

			Assert::AreEqual(true, n);
		}
	};
}

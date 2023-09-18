// Tyuiu.AhirbakievAR.Sprint0.Task7.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint0Task7
{
	bool Rezalt(int a, int b)override
	{
		bool c = false;
		int a1 = a / 100;
		int a2 = (a/10)%10;
		int a3 = a % 10;
		if (b == a1 || b == a2 || b == a3) c = true;
		return c;
	};
};
// Tyuiu.AhirbakievAR.Sprint0.Task6.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task6
{
	float Calculate(float a, float b)override
	{
		return a/3/b+6 ;
	};
};
// Tyuiu.AhirbakievAR.Sprint0.Task6.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//Tyuiu.AhirbakievAR.Sprint0.Task6.V1.Lib/Tyuiu.AhirbakievAR.Sprint0.Task6.V1.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint0Task6* date = new Service();
    float a, b;
    std::cout << "AshirbakievAR\n";
    std::cout << "¬ведите x число\n";
    std::cin >> a;
    std::cout << "¬ведите y число\n";
    std::cin >> b;
    std::cout << "x/3/y+6 : " << "√де x="<<a<<" y="<<b<< std::endl;
    std::cout << "Result = " << date->Calculate(a, b);
    std::cout << std::endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

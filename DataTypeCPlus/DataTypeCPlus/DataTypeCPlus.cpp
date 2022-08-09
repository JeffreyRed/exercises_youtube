// DataTypeCPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    short shortvar=3276;
    long longVar = 123213211;  
    int intVar = 12320132;
    unsigned int intUnsignedVar = 1232132111 * 2;
    bool boolVar = false;
    char charVar='A';
    float floatVar =0.000000000000000000000000000000000044;
    double doubleVar=0.0000000000000000000000000000000000000000000000000000000000000000044;
    string stringVar = "string";

    std::cout << "Hello World!\n";
    cout << "short "<< shortvar << endl;
    cout << "long " << longVar << endl;
    cout << "char " << charVar << endl;
    cout << "int " << intVar << endl;
    cout << "int unsigned " << intUnsignedVar << endl;
    cout << "boolean " << boolVar << endl;
    cout << "float " << floatVar << endl;
    cout << "double " << doubleVar << endl;
    cout << "string " << stringVar << endl;

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

// IfStatementCPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int result;

    std::cout << "Type a number\n";
    std::cin >> num1;

    if (num1<0 || num1>10) {
        cout << "Wrong number, type a number between 0 to 10"<<endl;
        return 0;
    }
    else {
        cout << "OK"<<endl;
    }

    cout << "Type a number\n";
    cin >> num2;

    if (num2 < 0 || num2>10) {
        cout << "Wrong number, type a number between 0 to 10" << endl;
        return 0;
    }
    else {
        cout << "OK" << endl;
    }
    result = num1 * num2;

    if (result> 20) {
        cout << "The value is greater than 20" << endl;
    }
    else if (result >10) {
        cout << "The value is greater than 10" << endl;
    }
    else {
        cout << "Other values" << endl;
    }

    cout << "the result is: "<<result<<endl;
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

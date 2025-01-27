// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double num1 = 0.0, num2 = 0.0, divide = 0.0, add = 0.0, product = 0.0, difference = 0.0;
    string operation;

    cout << "Please enter your first number: ";
    cin >> num1;
    cout << "Please enter your second number: ";
    cin >> num2;
    cout << endl;

    add = num1 + num2;
    divide = num1 / num2;
    product = num1 * num2;
    difference = num1 - num2;
   

    cout << "What do you want to do with " << num1 << " and " << num2 << "? ";
    cin >> operation;
    cout << endl;

    if (operation == "add") {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << add << endl;
    }
    else if (operation == "divide") {
        if (num2 != 0) {
            cout << "The quotient of " << num1 << " and " << num2 << " is: " << divide << endl;
        }
        else {
            cout << "Error: Division by Zero not allowed." << endl;
        }
    }
    else if (operation == "multiply") {
        cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
    else if (operation == "subtract") {
        cout << "The difference of " << num1 << " and " << num2 << " is: " << difference << endl;
    }
    else {
        cout << "Invalid Operation." << endl;
    }

    return 0;
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

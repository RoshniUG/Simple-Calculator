
#include<iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+': cout << num1 << " + " << num2 << " = " << num1 + num2; break;
        case '-': cout << num1 << " - " << num2 << " = " << num1 - num2; break;
        case '*': cout << num1 << " * " << num2 << " = " << num1 * num2; break;
        case '/': cout << num1 << " / " << num2 << " = " << num1 / num2; break;
        default:  cout << "Error! Operator is not correct.";
    }
    return 0;
}

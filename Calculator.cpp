#include <iostream>
int main () {
    char op;
    double num1;
    double num2;
    double result;
    std:: cout << "Enter valid operator (+ - * /): ";
    std:: cin >> op;
    std:: cout << "Enter first number: ";
    std:: cin >> num1;
    std:: cout << "Enter second number: ";
    std:: cin >> num2;
    switch(op) {
        case '+':
        result = num1 + num2;
        std:: cout << "The result would be: " << result;
        break;
        case '-':
        result = num1 - num2;
        std:: cout << "The result would be : " << result;
        break;
        case '*':
        result = num1 * num2;
        std:: cout << "The result would be: " << result;
        break;
        case '/':
        result = num1/num2;
        std:: cout << "The result would be: " << result;
        break;
        default:
        std:: cout << "Please enter a valid operator!";
        break;
    }
}
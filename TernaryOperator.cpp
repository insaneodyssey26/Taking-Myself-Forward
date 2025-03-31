#include <iostream>
int main () {
    int num;
    std:: cout << "Enter a number: ";
    std:: cin >> num;
    if (num % 2 == 1) {
        std:: cout << "It's odd!";
    }
    else {
        std:: cout << "It's even!";
    }
    /* Instead of using if, else... There's another thing called Ternary operator, let's try that 
    (num % 2 == 1) ? std:: cout << "It's odd!" : std:: cout << "It's even!"; */ 
    // Above parentheses are optional
}
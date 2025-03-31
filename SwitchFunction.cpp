#include <iostream> 
int main () {
    char letter;
    std:: cout << "Please enter a letter: ";
    std:: cin >> letter;
    switch(letter) {
        case 'A':
        std:: cout << "You have entered A";
        break;
        case 'B':
        std:: cout << "You have entered B";
        break;
        case 'C':
        std:: cout << "You have entered C";
        break;
        case 'D':
        std:: cout << "You have entered D";
        break;
        case 'E':
        std:: cout << "You have entered E";
        break;
        default:
        std:: cout << "Invalid input!";
    }
}
#include <iostream>
int main () {
    std:: string name = "Masum";
    int age = 18;
    std:: cout << name << '\n';
    std:: cout << age << '\n';
    std:: cout << "Now displaying the memory address of it" << '\n';
    std:: cout << &name << '\n'; 
    std:: cout << &age << '\n';
}
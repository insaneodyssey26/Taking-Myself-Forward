#include <iostream>
#include <cmath>
int main () {
    double base;
    std::cout << "Enter base: ";
    std::cin >> base;
    double perpendicular;
    std::cout << "Enter perpendicular: ";
    std::cin >> perpendicular;
    double hypotenuse;
    // Below method is done by using the powers.
    hypotenuse = sqrt(pow(base, 2) + pow(perpendicular,2));
    // Also can be done by multiplying -- hypotenuse = sqrt(base*base + perpendicular*perpendicular);
    std::cout << "The hypotenuse would be: " << hypotenuse;
    std:: cout << "The hell is going dawg I mean really bruh! hypotenuse";
}
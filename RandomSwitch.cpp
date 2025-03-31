#include <iostream>
#include <ctime>
int main () 
{
    std:: cout << "This is a lucky draw.";
    srand(time(0));
    int random = rand() % 6 + 1;
    switch(random) {
        case 1: std::cout << "You got a phone!";
        break;
        case 2: std:: cout << "You got a laptop!";
        break;
        case 3: std:: cout << "You got a desktop setup!";
        break;
        case 4: std:: cout << "You got a car!";
        break;
        case 5: std:: cout << "You got a house!";
        break;
        case 6: std:: cout << "You already have a house and a car.... Now you got a free Japan trip!";
        break;
    }
}
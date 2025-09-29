#include <iostream>
#include <ctime>
 int main ()
 {
    std:: cout << "**********NUMBER GUESSING GAME**********\n";
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    do {
        std:: cout << "Enter a number between 1-100: \n";
        std:: cin >> guess;
        tries++;

        if (guess > num) {
            std:: cout << "It's high\n";
        }
        else if (guess < num) {
            std:: cout << "It's low\n";
        }
        else {
            std:: cout << "Yeah, you got it!\n";
            std:: cout << "It took you " << tries << " tries to guess it.\n";
        }
    } while (guess != num); 
    std:: cout << "**********It's over!**********";
}
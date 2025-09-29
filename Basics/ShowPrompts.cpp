#include <iostream>
int main () {
    std:: string games[5];
    int size = sizeof(games)/sizeof(games[0]);
    std:: string temp;
    for (int i = 0; i < size; i++)
    {
        std:: cout << "Enter the game you like or 'q' to quit" << i+1 << ": ";
        std:: getline (std:: cin, temp);
        if (temp == "q") {
            break;
        }
        else {
            games[i] = temp; 
        }
    }
    for (int i = 0; !games[i].empty(); i++) {
        std:: cout << games[i] << '\n';
    }
}
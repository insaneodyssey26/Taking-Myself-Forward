#include <iostream>
int main () {
    int size = 40;
    std:: string Jets[size];
    fill (Jets, Jets + (size/4), "B-2 Stealth Bomber");
    fill (Jets +(size/4), Jets +(size/4)*2, "F-22 Raptor");
    fill (Jets +(size/4)*2, Jets +(size/4)*3, "F-16 Falcon");
    fill (Jets +(size/4)*3, Jets + size, "Sukhoi SU-57");
    for (std:: string Jet : Jets) {
        std:: cout << Jet << '\n';
    }
}
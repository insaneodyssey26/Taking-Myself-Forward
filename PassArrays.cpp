#include <iostream>

double getTotal(double grades[], int size);
int main () {
    double grades [] = {96, 78, 69, 94, 89};
    int size = sizeof(grades)/sizeof(grades[0]);
    double total = getTotal(grades, size);
    std:: cout << "Total grades would be: " << total << '\n';
}
double getTotal(double grades[], int size) {
    double total=0;
    for(int i =0; i < size; i++) {
        total += grades[i];
    }
    return total;
}
#include <iostream>
#include <iomanip>
void currentBalance (double balance); 
double dataAddon ();
double usage (double balance);

int main () 
{
   double balance = 0; 
   int choice = 0;

   do {
    std:: cout << "**********THIS IS A PROGRAM TO MANAGE YOUR DATA BALANCE**********\n";
    std:: cout << "*******GIVE AN INPUT FROM BELOW OPTIONS*******\n";
    std:: cout << "1) View Current Balance\n";
    std:: cout << "2) Data Add-On\n";
    std:: cout << "3) Data Usage\n";
    std:: cout << "4) Exit\n";
    std:: cin >> choice;
    std:: cin.clear();
    fflush (stdin);

    switch (choice)
    {
    case 1: currentBalance (balance);
        break;
    case 2: balance += dataAddon ();
                currentBalance (balance);
        break;
    case 3: balance -= usage (balance);
                currentBalance (balance);
        break;
    case 4: std:: cout << "Thanks for using this program!";
        break;
    default: std:: cout << "Invalid Input!";
    } 
   }while (choice !=4);
}

void currentBalance (double balance) { 
    std:: cout << "Your current Data Balance is: " << std:: setprecision(2) << std:: fixed<< balance << " MB" << '\n';
}
double dataAddon () {
    double data;
    std:: cout << "Enter the amount of data you want to add: ";
    std:: cin >> data;
    if (data > 0) {
        return data;
    }
    else {
        std:: cout << "Invalid Input!";
    }
}
double usage (double balance) {
    double data;
    std:: cout << "Enter the amount of data you want to use: ";
    std:: cin >> data;
    if (data < balance) {
        return data;
    }
    else {
        std:: cout << "Insufficient Balance!" << '\n';
    }
}
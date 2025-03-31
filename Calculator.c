// Creating a Calculator program in C
#include <stdio.h>
int main () {
    char op;
    float num1, num2, result;

    printf ("Enter an Operator (+, -, *, /): \n");
    scanf ("%c", &op);
    printf ("Enter two numbers: ");
    scanf ("%f%f", &num1, &num2);

    switch (op) {
        case '+' :
        result = num1 + num2;
        printf ("Result: %.2f + %.2f  = %.2f", num1, num2, result);
        break;

        case '-' :
        result = num1 - num2;
        printf ("Result: %.2f - %.2f = %.2f", num1, num2, result);
        break;
        
        case '*' :
        result = num1 * num2;
        printf ("Result: %.2f * %.2f = %.2f", num1, num2, result);
        break;

        case '/' :
        if (num2!=0) {
            result = num1/num2;
            printf ("Result: %.2f / %.2f = %.2f", num1, num2, result);
        } else {
            printf ("Denominator must not be 0");
        }
        break;

        default :
            printf ("Invalid operation!");
    }
    return 0;
}
/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description:calculate the gross pay, the taxes, and the net pay.
*/

#include <stdio.h>

int main(void) {
    double hours, rate;
    double gross, tax, net;

    printf("Enter hours worked: ");
    if (scanf("%lf", &hours) != 1) {
        fprintf(stderr, "Invalid input for hours.\n");
        return 1;
    }

    printf("Enter hourly wage: ");
    if (scanf("%lf", &rate) != 1) {
        fprintf(stderr, "Invalid input for hourly wage.\n");
        return 1;
    }

    
    if (hours > 40.0) {
        gross = 40.0 * rate + (hours - 40.0) * rate * 1.5;
    } else if (hours >= 0.0) {
        gross = hours * rate;
    } else {
        fprintf(stderr, "Hours cannot be negative.\n");
        return 1;
    }

    
    if (gross <= 600.0) {
        tax = gross * 0.15;
    } else {
        tax = 600.0 * 0.15 + (gross - 600.0) * 0.20;
    }

    net = gross - tax;

    printf("Gross pay = $%.2f\n", gross);
    printf("Tax       = $%.2f\n", tax);
    printf("Net pay   = $%.2f\n", net);

    return 0;
}
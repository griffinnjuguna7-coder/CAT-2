//simple c programming
/*
name: Griffin Waruinge Njuguna 
Reg: CT101/G/26480/25
Description: employee pay calculation
*/#include <stdio.h>

int main() {
    float hours, wage, gross, tax, net;

    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours > 40) {
        gross = 40 * wage + (hours - 40) * wage * 1.5;
    } else {
        gross = hours * wage;
    }

    // Calculate tax
    if (gross <= 600) {
        tax = gross * 0.15;
    } else {
        tax = 600 * 0.15 + (gross - 600) * 0.20;
    }

    net = gross - tax;

    printf("\nGross Pay: $%.2f\n", gross);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net);

    return 0;
}
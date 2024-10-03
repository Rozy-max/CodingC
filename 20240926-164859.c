/*
Author:Awilly Rose 
Reg no:CT102/G/22723/24
*/
#include <stdio.h>
int main() {
    float principal, time, rate, simple_interest;

    // Input values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    // Calculate simple interest
    simple_interest = (principal * time * rate) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", simple_interest);

    return 0;
}
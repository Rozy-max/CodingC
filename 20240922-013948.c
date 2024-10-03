/*
Program to add two numbers 
Author: Rose 
Reg No: CT101/22723/24
Date: 20/9/2024
*/
#include <stdio.h>

int main() {
    // declaration and initialization 
    char a = 18;
    char name[] = "John";
    int age = 18;
    float salary = 2000; //%f
    double area = 20; //%lf

    // Print the values
    printf("The character is %c \n", a);
    printf("The name (string) is %s \n", name);
    printf("The age (int) is %d \n", age);
    printf("The salary (float) is %.2f \n", salary); // %.2f for two decimal places
    printf("The area (double) is %.2lf \n", area); // %.2lf for double

    return 0;
}
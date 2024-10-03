/*
Author: Awilly Rose Akinyi 
Reg no:CT102/G/22723/24
*/
#include<stdio.h>
int main() {
    int income,age;
    
    printf("21 years:");
    scanf("%d", &age);
    
    printf(" shs 21000 :");
    scanf("%d", &income);
    
    if(age<=21&&income<=21000){
    printf("congratulations,you quality for our loan");
    }else{
    printf("unfortunatly,we are unable to offer you our loan");
    }
    return 0;
    }
//program to calculate electricity bill
/*
Author: Awilly Rose Akinyi 
Reg No:CT102/G/22723/24
*/
#include <stdio.h>
int main () {

int customerID;
int unitconsumed;
float chargesperunit;
float surcharge=0;
float TotalBill;
char customername[60];
 

printf("\nEnter the customerID:");
scanf("%d", &customerID);

printf("\nEnter the customername:");
scanf("%s", &customername);

printf ("\nEnter the unitconsumed:");
scanf("%d", &unitconsumed);

if(unitconsumed <200)
   {
   chargesperunit = 1.20;
}
else if (unitconsumed >= 200 && unitconsumed <= 400)
     {
     chargesperunit=1.50;
     }

else if (unitconsumed >400 && unitconsumed <= 600)
    {
    chargesperunit = 1.80;
}
else
{
    chargesperunit = 2.00;
    }
    
   TotalBill = chargesperunit * unitconsumed;

      if(TotalBill>400)
{
      surcharge = TotalBill * 1.15;
      TotalBill+=surcharge;

}
      if(TotalBill<100){
      TotalBill=100;
      }


printf("Customers Name:%s\n",customername);
printf("Customers Id No.:%d\n",customerID);
printf("Total units consumed:%d\n", unitconsumed);
printf("Charges Per Unit consumed:%.2f\n",chargesperunit);
printf("Total Bill:%.2f\n", TotalBill);

return 0;
}
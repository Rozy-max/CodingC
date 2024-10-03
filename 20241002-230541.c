/*
Author: Awilly Rose Akinyi 
Reg no:CT102/G/22723/24
*/

#include <stdio.h>
    int main() {
    int bookID, due date, returnDate, days over=0;
    int fine =0;
    //Taking inputs from the user
    Printf ("Enter BookID: ");
    
    scanf ("%d",& bookID);
    printf ("Enter Due Date (as a number representing days):");
    
    scanf ("%d",&due date);
    printf ("Enter return Date(as a number representing days):");
    scanf ("%d",&dueDate);
    printf ("Enter Return Date(as a number representing days):");
    scanf ("%d",& return Date);
    //calculate the days overdue 
    days overdue -returnDate-dueDate;
    //if the return Date is before or on the dueDate,no fine is charged 
    If (days Overdue=0;
    fine=0;
    }else{
    //Determine the fine based on the overdue days 
    if (day overdue <=7) {
    fine = days overdue * 20 ; // 20sh/day for Upto 7 days 
    } else if (days overdue <=14){
    
    fine = 7*20 + (days Overdue -7)* 50;// 50sh/day for 8- 14days
    }else{
    fine= 7* 20 + 7* 50+ (days Overdue - 14)* 100; //100sh/day for 15days or more 
     
     }
     }
     //Display the results 
     printf ("\n---fine Details ---\n");
     printf ("BookID:%d\n",bookID);
     printf ("dueDate:%d\n",dueDate);
     printf ("Return Date:%d\n", return Date);
     printf ("Days Overdue:%d\n", days Overdue);
     printf ("Total fine:Ksh.%d\n", fine);
     
     return 0;
     }
    
     
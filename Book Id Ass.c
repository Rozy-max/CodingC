#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    double fineRate, fineAmount;

    // Input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate
    if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50.0;
    } else if (daysOverdue >= 15) {
        fineRate = 100.0;
    } else {
        fineRate = 0.0;
        daysOverdue = 0; // No fine if not overdue
    }

    // Calculate fine amount
    fineAmount = fineRate * daysOverdue;

    // Output the result
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate per Day: Ksh %.2f\n", fineRate);
    printf("Total Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}
#include <stdio.h>

int main()
{
    double balance = 10000.00;
    double rate = 2.0;
    double repayment = 2000.00;
    double interest, payment, totalInterest = 0;
    int month = 0;

    printf("Month\tInterest\tPayment\t\tBalance\n");

    while (balance > 0.005 && month < 360)
    {
        month++;

        interest = balance * rate / 100;
        balance = balance + interest;

        payment = repayment;

        if (payment > balance)
            payment = balance;

        balance = balance - payment;
        totalInterest += interest;

        if (balance < 0.005)
            balance = 0;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n",
               month, interest, payment, balance);

        if (repayment <= interest)
        {
            printf("Loan cannot be repaid with this amount.\n");
            return 0;
        }
    }

    if (balance == 0)
    {
        printf("\nLoan fully repaid!\n");
        printf("Total Months: %d\n", month);
        printf("Total Interest: Rs. %.2f\n", totalInterest);
    }
    else
    {
        printf("Maximum repayment period reached.\n");
    }

    return 0;
}

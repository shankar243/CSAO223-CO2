#include <stdio.h>

int main()
{
    unsigned long numbers[] = {97, 100, 7919, 1000003};
    unsigned long n, i;
    int prime, divisions;

    for (int j = 0; j < 4; j++)
    {
        n = numbers[j];
        prime = 1;
        divisions = 0;

        if (n < 2)
            prime = 0;

        else if (n == 2)
            prime = 1;

        else if (n % 2 == 0)
        {
            divisions++;
            prime = 0;
        }
        else
        {
            for (i = 3; i <= n / i; i += 2)
            {
                divisions++;

                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        printf("%lu: %s, Divisions = %d\n",
               n, prime ? "Prime" : "Not Prime", divisions);
    }

    return 0;
}

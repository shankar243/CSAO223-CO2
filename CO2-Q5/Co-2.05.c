#include <stdio.h>

unsigned long checks = 0;

int is_prime(unsigned long n)
{
    unsigned long i;

    checks = 0;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        checks++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

int is_prime_while(unsigned long n)
{
    unsigned long i = 2;

    checks = 0;

    if (n < 2)
        return 0;

    while (i <= n / i)
    {
        checks++;

        if (n % i == 0)
            return 0;

        i++;
    }

    return 1;
}

int is_prime_do(unsigned long n)
{
    unsigned long i = 2;

    checks = 0;

    if (n < 2)
        return 0;

    do
    {
        if (i > n / i)
            break;

        checks++;

        if (n % i == 0)
            return 0;

        i++;

    } while (1);

    return 1;
}

int main()
{
    unsigned long tickets[] = {97, 100, 7919, 1000003};
    int i, p;

    printf("FOR LOOP:\n");

    for (i = 0; i < 4; i++)
    {
        p = is_prime(tickets[i]);

        printf("%lu %s divisions = %lu\n",
               tickets[i],
               p ? "prime" : "not prime",
               checks);
    }

    printf("\nWHILE LOOP:\n");

    for (i = 0; i < 4; i++)
    {
        p = is_prime_while(tickets[i]);

        printf("%lu %s divisions = %lu\n",
               tickets[i],
               p ? "prime" : "not prime",
               checks);
    }

    printf("\nDO-WHILE LOOP:\n");

    for (i = 0; i < 4; i++)
    {
        p = is_prime_do(tickets[i]);

        printf("%lu %s divisions = %lu\n",
               tickets[i],
               p ? "prime" : "not prime",
               checks);
    }

    return 0;
}

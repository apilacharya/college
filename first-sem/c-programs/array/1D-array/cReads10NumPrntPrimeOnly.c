#include <stdio.h>

int main(void)
{
    int x[10], p, c;
    printf("Enter any 10 numbers:  \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("The prime numbers among the input values are: \n");
    for (int i = 0; i < 10; i++)
    {
        p = x[i];
        c = 0;

        for (int j = 1; j <= p; j++)
        {
            if (p % j == 0)
            {
                c = c + 1;
            }
        };

        if (c == 2)
        {
            printf("%d ", p);
            printf("\n");
        }
    }

    return 0;
}
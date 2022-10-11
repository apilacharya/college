#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf("%d", j);
        };

        printf("\n");
    };
    return 0;
}


// 12345
// 1234
// 123
// 12
// 1
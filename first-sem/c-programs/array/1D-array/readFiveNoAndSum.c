#include <stdio.h>

int main(void)
{
    int x[5], s=0;
    printf("Enter any five numbers \n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &x[i]);
        s= s+x[i];
    }

    printf("sum is %d \n", s);
    return 0;
}
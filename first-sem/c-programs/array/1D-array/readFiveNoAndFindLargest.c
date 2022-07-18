#include <stdio.h>

int main() 
{
int x[5], max= x[0], i;

printf("Enter any 5 numbers: \n");

for(i =1; i<10; i++)
{
    scanf("%d", &x[i]);
    if(max < x[i])
    {
        max=x[i];
    };
}

printf("The greatest value is %d", max);

return 0;
}
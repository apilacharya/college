// bubble swapping algorithm

#include <stdio.h>
int main(void) {
    int temp;
    int x[10];
    printf("Enter 10 numbers: \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &x[i]);
    }


    for(int i=0; i<10; i++)
    {
        for(int j=0; j<9-i; j++)
        {
            if(x[j]> x[j+1])
            {
                    temp = x[j];
                    x[j] = x[j+1];
                    x[j+1]= temp;
            }
            
        }
    }


    printf("The sorted numbers are: \n");
    for(int i=0; i<10; i++)
    {
        printf("%d \t", x[i]);
    }

    return 0;
}
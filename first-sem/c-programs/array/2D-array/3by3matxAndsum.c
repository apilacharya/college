#include <stdio.h>

int main(void)
{
    int m1[3][3], m2[3][3], s[3][3];

    
    printf("Enter elements of first 3X3 matrix: \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of 2nd 3X3 matrix: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {   
            scanf("%d", &m2[i][j]);
        }
    }


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("The sum of matrix is \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;

}
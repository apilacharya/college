#include <stdio.h>
int main(void)
{
    int m1[3][3], m2[3][3], p[3][3], s;

    printf("Enter elements (row-wise) of 1st matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }



    printf("Enter elements (row-wise) of 2nd matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            s=0;

            for(int k=0; k<3; k++)
            {
                s= s + m1[i][k] + m2[k][j];
            }

            p[i][j] =s;
        }
    }

    printf("The product matrix is: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", p[i][j]);
        }

        printf("\n");
    }

    return 0;

}
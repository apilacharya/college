#include <stdio.h>

int main()
{
    int i, t = 1;
    char w1[50], w2[50];

    printf("Enter 1st word: \n");
    scanf("%s", w1);

    printf("Enter 2nd word: \n");
    scanf("%s", w2);

    for (i = 0; w1[i] != '\0' && w2[i] != '\0'; i++)
    {
        if (w1[i] != w2[i])
        {
            t = 0;
            break;
        }
    }   

    if (t == 1 && w1[i] == '\0' && w2[i] == '\0')
    {
        printf("Words are same");
    }
    else
    {
        printf("Words are different");
    }

    return 0;
}
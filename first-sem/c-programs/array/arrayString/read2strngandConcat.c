#include <stdio.h>

int main()
{
    char w1[20], w2[20], w3[40];
    int i, j;

    printf("Enter any two words \n");
    scanf("%s %s", w1, w2);

    for(i=0; w1!='\0'; i++)
    {
        w3[i] = w1[i];
    }`

    for(j=0; w2[j] != '\0'; j++)
    {
        w3[i+j] = w2[j];
    }

    w3[i+j] = '\0';
    printf("The new string is %s", w3);

    return 0;
}
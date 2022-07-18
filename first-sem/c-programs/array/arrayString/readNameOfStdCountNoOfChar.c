#include <stdio.h>
int main()
{
    int c=0;
    char name[50];
    printf("Enter name of student \n");

    for(int i=0; name[i] != "\0"; i++)
    {
        c=c+1;
    }

    printf("No. of characters = %d in %s", c, name);
    return 0;
}
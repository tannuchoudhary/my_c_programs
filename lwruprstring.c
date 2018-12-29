#include<stdio.h>
#include<string.h>
int main()
{
    char inputString[100];
    int index;
    printf("Enter a string:\n");
    gets(inputString);
   // scanf("%c",&inputString);
    printf("string with all uppercase character\n%s",strupr(inputString));
    return 0;
}

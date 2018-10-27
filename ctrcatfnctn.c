//to create your own string concatenation function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int y;
    printf("Enter a string:\n");
    gets(s);
    y=strcat(s,"tannu");
    printf("%s",y);
    return 0;

}

/*Counting the number of letters and digits in
a string*/

#include<stdio.h>
int main()
{
    char s[100];
    int digits=0,alphabets=0,specialChar=0,spaces=0;
    int x;

    printf("Enter the string:\n");
    gets(s);

    for(x=0;s[x]!='\0';x++)
    {
        if(s[x]>='0'&&s[x]<='9')                                 //for counting digits
            digits++;
        else if((s[x]>='A'&&s[x]<='Z')||(s[x]>='a'&&s[x]<='z')) //for counting alphabets.
            alphabets++;
            else if(s[x]==' ')                                  //for counting spaces
                spaces++;
            else
                specialChar++;

    }
    printf("\nDigits:%d\nAlphabets:%d",digits,alphabets);
    printf("\nSpecial characters:%d\nSpaces:%d\n",specialChar,spaces);
    return 0;
}

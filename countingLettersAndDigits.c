/*Counting the number of letters and digits in
a string*/

#include<stdio.h>
int main()
{
    char s[100];
    int digits=0,alphabets=0,specialChar=0,spaces=0;
    int i;

    printf("Enter the string:\n");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')                                 //for counting digits
            digits++;
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) //for counting alphabets.
            alphabets++;
            else if(s[i]==' ')                                  //for counting spaces
                spaces++;
            else
                specialChar++;

    }
    printf("\nDigits:%d\nAlphabets:%d",digits,alphabets);
    printf("\nSpecial characters:%d\nSpaces:%d\n",specialChar,spaces);
    return 0;
}

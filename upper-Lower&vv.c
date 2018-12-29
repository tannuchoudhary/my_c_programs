/*To convert uppercase into lowercase
and lowercase into uppercase.*/

#include<stdio.h>
void main()
{
    char s[100];
    int i;
    printf("Enter a string:\n");
    gets(s);

    for(i=0;s[i]!='\0';i++)   //loop will stop when it will get null char.
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;     /*Adding 32 in the ASCII value of capital
                                letters converts it into small letter.*/
        else
            s[i]=s[i]-32;     /*Subtracting 32 from the ASCII value of small
                                letters converts it into capital letters. */
    }
    printf("Converted string is %s",s);


}

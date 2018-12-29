#include<stdio.h>
int main()
{
    char s[100];
    int odd=0,even=0;
    int i;
    printf("Enter your numbers:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    if((s[i]==0)||(s[i]==2)||(s[i]==4)||(s[i]==6)||(s[i]==8))
        even++;
    else if ((s[i]==1)||(s[i]==3)||(s[i]==5)||(s[i]==7)||(s[i]==9));
        odd++;
    }
    printf("\nodd:%d\neven:%d\n",odd,even);
        return 0;

}

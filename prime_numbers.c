#include<stdio.h>
int main()
{
    int lowerLimit,upperLimit,x,i;
    printf("Enter two numbers:");
    scanf("%d%d",&lowerLimit,&upperLimit);

    for(x=(lowerLimit+1);x<=(upperLimit-1);x++) /*we will check all numbers
                                                  between lower limit and upper limit*/
    {
        for(i=2;i<x;i++)           /*same condition applied as applied to find
                                     that the number is prime or not*/
        if(x%i==0)
        break;
    if(i==x)
        printf("%d ",x);
    }
    return 0;
}

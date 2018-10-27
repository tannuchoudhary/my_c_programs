#include<stdio.h>
int main()
{
    int a,b,hcf,lcm;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);

    for(hcf=a<b?a:b;hcf>=1;hcf--)  //to find HCF of a number.
        if(a%hcf==0 && b%hcf==0)
        break;
    printf("HCF is %d\n",hcf);

    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
        if(lcm%a==0 && lcm%b==0)
        break;
    printf("LCM is %d\n",lcm);
    return 0;

}

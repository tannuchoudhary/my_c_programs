#include<stdio.h>
#include<math.h>
void main()
{
    float num;
    int s,a;
    s=num-0.5;
    a=num+0.5;
    printf("Enter the number which you want to round off:");
    scanf("%f",num);
    if(num>0)
        printf("%d",a);
    if(num<0)
        printf("%d",s);


}

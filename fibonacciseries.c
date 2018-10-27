#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,display=0,count;
    printf("Enter number of terms:\n");
    scanf("%d",&n);

    printf("Fibonacci series is:%d+%d+",t1,t2);   //Displaying first two terms.
    count =2;
    while (count<n)
    {
        display=t1+t2;
        t1=t2;
        t2=display;
        count++;
        printf("%d+",display);

    }
    return 0;

}

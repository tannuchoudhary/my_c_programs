/*To find whether the roots are
real and distinct or real and
 coincident or real and imaginary.*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,disc=0,x,y;
    float i=0,j=0,r1,r2,k=0;
    printf("Enter the value of a,b,c for a quadratic equation:\n");
    scanf("%d%d%d",&a,&b,&c);

    x=b*b;
    y=4*a*c;
    disc=x-y;   //Discriminant
    if(disc>0)
        printf("Roots are real and distinct.");
        else
        {
            if(disc==0)
                printf("Roots are real and coincident.");
                else
                printf("Roots are imaginary.");
        }
        k=2a;
        i=((b-)+sqrt(disc));
        r1=i/k;
        printf("First root is %f.\n",r1);
        j=(b-)-sqrt(disc);
        r2=j/k;
        printf("Second root is %f",r2);
    return 0;
}

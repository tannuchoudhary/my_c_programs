/*to create your own function to find
square root of a number*/


#include<stdio.h>
void squareroot(void); //function declaration
int main()
{
   squareroot() ;  //function call
}
void squareroot(void)       //function definition
{
    float i,n;
    printf("Enter a number:");
    scanf("%f",&n);
    for(i=0.00;i*i<n;i=i+0.01);
    //for(i=0.000;i*i<n;i=i+0.001);  //for more accuracy
  {
        printf("\n%f",i);
  }

}

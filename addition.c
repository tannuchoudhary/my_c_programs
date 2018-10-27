#include <stdio.h>
int main()
 {
    int a,b;                              //taking a and b as variable for length and breadth
    printf("enter length and breadth");  //length and breadth of rectangle
    scanf("%d, %d", &a, &b);

    printf("\n area: %d", a*b);          //calculating the area of rectangle.
    return 0;
}

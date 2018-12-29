#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,k,l;
    printf("Enter the number of rows:\n");
    scanf("%d",&i);
    printf("Enter the number of columns:\n");
    scanf("%d",&j);
    if(i=j)
        printf("Matrix is symmetric.\n");
    else
    printf("Matrix is asymmetric\n");
    printf("Enter the elements for the matrix:\n");
    for(k=0;k<i;k++)
        for(l=0;l<j;l++)
        scanf("%d",&a[i][j]);

    if((a[i][j]==1)&&(i==j))
        printf("This is identity matrix.");
    else
        printf("This is non identity matrix.");
        return 0;
}

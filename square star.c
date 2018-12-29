/*drawing square star pattern in c.*/
#include<stdio.h>

int main()
{
    int rows,i,j;
    printf ("enter number of rows:");  /*input number of rows */
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for (j=1;j<=rows;j++)
        {
            printf ("*");
        }
        printf("\n");   /*move to the next line */
    }
    return 0;

}

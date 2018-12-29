#include <stdio.h>

int main()

{
    int i,j;
    int table=10;
    int max=10;
    for (i=1;i<=table;i++)
    {
        for (j=1;j<=max;j++)
        {
            printf("%d X %d =%d\n",i,j,i*j);
        }
        printf("\n");/*blank lines between tables*/
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i,space,star,row;
    int m=1;

    scanf("%d",&row);

    for (i=1;i<=row;i++)
    {
        for (space=0;space<row-i;space++)
        {
            printf(" ");
        }
        for (star=0;star<(i*2)-1;star++)
        {
            printf("%d",m);
        }

        printf("\n");
    }
}

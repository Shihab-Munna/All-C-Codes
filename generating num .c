#include <stdio.h>
int main()
{
    int k=5,n=2,i,j;

    for (i=1;i<=k;i++)
        {
            for (j=i+1;j<=k;j++)
            {
                printf("%d %d\n",i,j);

            }
        }

        return 0 ;
}

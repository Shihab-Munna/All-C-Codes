#include <stdio.h>

int main ()

{
    int T,i,n,even=0,odd=0;

    scanf ("%d",&T);

    for (i=1;i<=T;i++)
    {
        scanf ("%d",&n);

        if (n>0)
        {
            even++ ;
        }

        else

        {
            odd++ ;
        }
    }

    printf ("%d %d\n",even,odd);

    return 0;
}

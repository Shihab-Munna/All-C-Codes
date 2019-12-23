
#include <stdio.h>

int main ()

{
    int n,i ;

    int ara [n];

    printf (" Enter the array length = ");

    scanf   ("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf ("%d",& ara[i]);
    }

    printf ("\n\n");

    int j;

    for (j=1;j<=n;j++)
    {
        printf (" %d Value = %d\n",j,ara[j-1]);
    }

    return 0;
}

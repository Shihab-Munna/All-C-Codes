#include <stdio.h>

int find_sum (int ara[],int n)
{
    int sum = 0;

    int i ;

    for (i = 0; i < n; i++)
    {
        sum = sum + ara [i];
    }

    return sum  ;
}

int main()

{
    int n,i,result;

    int ara[n];

    printf (" Enter the Array length = ");

    scanf  ("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
    scanf ("%d",& ara[i]);
    }

    result = find_sum(ara,n);



    printf ("Sum = %d",result);

    return 0;
}

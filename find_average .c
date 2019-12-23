#include <stdio.h>

int find_average (int ara[],int n)
{
    int sum = 0;

    int i ;

    for (i = 0; i < n; i++)
    {
        sum = sum + ara [i];
    }

    int result = sum/n;

    return result  ;
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

    result = find_average(ara,n);



    printf ("Average = %d",result);

    return 0;
}

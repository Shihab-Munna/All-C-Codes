#include <stdio.h>

int find_min (int ara[],int n)
{
    int min = ara[0];

    int i ;

    for (i = 0; i<n ;i++)
    {
        if (ara[i]< min )

        min = ara[i];
    }

    return min ;
}

int main ()
{
    int ara []={12,8,9,4,5,4,3,3,9,43};
    int n =10;

    int min = find_min(ara,n);

    printf ("Min value of Array is : %d",min);

    return 0;
}


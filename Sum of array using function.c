#include <stdio.h>

int find_sum (int ara[],int n)
{
    int sum = 0;

    int i;

    for (i =0;i<n;i++)
    {
        sum = sum + ara[i];
    }

    return sum ;
}

int main ()

{
    int ara []={2,4,5,4,3};

    int n = 5;

    int sum = find_sum (ara,n);

    printf (" Total of array : %d",sum );

    return 0;

}

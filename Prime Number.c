#include <stdio.h>
int is_prime(int n)
{
    int i;

    if (n<2)
    {
        return 0;
    }

    for (i=2;i<n;i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()

{
    int  n;

    while (1)
    {
        printf("Please Enter A Number (enter 0 to Exit) = ");

        scanf("%d",&n);

        if (n == 0)break;

        if (1== is_prime(n))
        {
            printf("%d Is Prime Number \n",n);
        }

        else
        {
            printf("%d Is not a Prime Number\n",n);
        }
    }

    return 0 ;
}

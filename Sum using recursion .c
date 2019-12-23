#include <stdio.h>
int sum(int n)
{
    if (n==0)return;

    return n=n+sum(n-1);
}

int main()
{
    int n;
    printf("Sum of 1 T0 __ ? :");
    scanf("%d",&n);
    printf("\n\nThe Sum Of 1 - %d: %d\n",n,sum(n));
    return;
}

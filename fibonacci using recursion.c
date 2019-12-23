#include <stdio.h>
#include <string.h>
int f_calls = 0;

int fib (int n)
{
    f_calls=f_calls+1;

    if(n == 1 || n == 2)return 1;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n ;
    char str[3];

    scanf("%d",&n);

    if (n==1)
    {
        strcpy(str,"st");
    }
    else if (n ==2)
    {
        strcpy(str,"nd");
    }

    else if (n == 3)
    {
        strcpy(str,"rd");
    }

    printf("%d%s fibonacci number is %d\n",n,str,fib(n));
    printf("Number o functions calls: %d\n",f_calls);
    return 0 ;
}

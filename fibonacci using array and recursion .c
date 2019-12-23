#include <stdio.h>
#include <string.h>
int f_calls =0;
int fibo[50];

int fib(int n)
{
    f_calls+=1;
    if (fibo[n] != 0)
    {
        return fibo[n];
    }
    if (n == 1 || n==2)
    {
        return fibo[n];
    }

    fibo[n]=fib(n-1)+fib(n-2);
    return  fibo[n];


}

int main()
{
    int n ;
    char str[3];

    scanf("%d",&n);

    if (n == 1)strcpy(str,"st");
    else if (n == 2)strcpy(str,"nd");
    else if (n == 3)strcpy(str,"rd");
    else strcpy(str,"th");

    printf("%d%s Fibonacci number is %d \n",n,str,fib(n));
    printf("Number of Function Call : %d\n",f_calls);

    for (n=1;n<12;n++)
    printf("%d: %d\n",n,fibo[n]);

        return 0 ;

}

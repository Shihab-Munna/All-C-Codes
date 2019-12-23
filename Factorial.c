#include <stdio.h>
int factorial (int num)
{
    if (num==1)return 1;
    else return (num*factorial(num-1));

}
int main()

{
    int n,i,t;

    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
         scanf("%d",&n);

         printf("%d\n",factorial(n));
    }


    return 0 ;

}

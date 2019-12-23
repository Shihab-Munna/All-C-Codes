#include <stdio.h>
int main()
{
    long int i,j,n,p,t,digit=0,num=0;

    for (i=0;i<t;i++)
    {
        scanf("%ld %ld",&num,&p);

        for (j=0;j<p;j++)
        {
            num=num*p;
        }

        while  (num !=0)
        {
            num =num/10;
            digit++;
        }

        printf("%ld\n",digit);
        num=0;
        digit=0;

    }
}

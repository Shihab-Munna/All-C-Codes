//Will generate 10 Rendom Numbers
#include <stdio.h>
int main()
{
    int i,ara[10];

    for (i=0;i<10;i++)
    {
        ara[i]= rand();
        printf ("%d\n",ara[i]);
    }

    return 0;
}


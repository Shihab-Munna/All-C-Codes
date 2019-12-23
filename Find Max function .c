#include <stdio.h>
int find_max(int a,int b,int c,int d)
{
    if (a > b && a >c && a>d)

    return a;

    else if (b>c && b>d)

    return b;

    else if (c>d)

    return c;

    else

    return d ;
}
int main ()

{
    int a,b,c,d,max;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    max =find_max(a,b,c,d);

    printf("The Max Number Is = %d \n",max);

    return 0 ;

}


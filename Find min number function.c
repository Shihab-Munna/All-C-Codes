#include <stdio.h>
int find_min(int a,int b,int c,int d)
{
    if (a < b && a < c && a < d)

    return a;

    else if (b < c && b < d)

    return b;

    else if (c < d)

    return c;

    else

    return d ;
}
int main ()

{
    int a,b,c,d,min;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    min =find_min(a,b,c,d);

    printf("The Min Number Is = %d \n",min);

    return 0 ;

}



#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int d,l=0,i=0,j=0,n;
    int x[10000];

    printf("Enter Decimal Value:");
    scanf("%d",&d);

    printf("The Binary of %d is: ",d);
    while (d!=0)
    {
        x[i]= d%2 ;
        d = d/2;
        l++;
        i++;
    }

    for (i=l-1;i>=0;i--)
    {
        printf("%d",x[i]);
    }

    printf("\n");

    return 0 ;



}

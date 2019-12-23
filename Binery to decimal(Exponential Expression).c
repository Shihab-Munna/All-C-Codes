#include<stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char binery[65];
    int i,len,decimal=0,power;

    printf ("Enter the Binery Number:");
    scanf("%s",binery);
    decimal=0;

    len=strlen(binery);
    power=len-1;

    for (i=0;i<len;i++)
    {
        decimal+=(binery[i]-'0')*((int)pow(2,power));
        power--;
    }

    printf("The Decimal value of %s is %d.\n",binery,decimal);
    return 0;
}

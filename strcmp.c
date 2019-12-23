#include <stdio.h>
int main()
{
    char str1[]="Munna";
    char str2[]="munna";

    int x=strcmp(str1,str2);

    if (x==0)printf("Strings Are Equel\n");
    else printf("Strings Are not Equel\n");

    return 0 ;

}

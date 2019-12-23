#include <stdio.h>
#include <string.h>

int main()
{
    int k=0,i=0,l=0,x=0;
    char pal[80];
    printf("Plese! Enter A string :");
    gets(pal);

    l=strlen(pal);
    x=(l/2)+1;



    while(l > x)
    {
        if (pal[k] == pal[l-1])i=0;
        else i++;

        k++;
        l--;
    }

    if (i==0)
    printf("The Word is Palindrom :) \n");
    else printf("The Word is not Palindrom ");

    return 0 ;


}

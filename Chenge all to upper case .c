#include <stdio.h>

int main()
{
    char country []={'B','a','n','g','L','a','D','e','s','h'};

    int i, length ;

    printf ("%s\n",country);

    length = 10;

    for (i = 0; i < length;i++)
    {
        if (country [i]>= 97 && country [i]<= 122 )
        {
            country [i]='A'+(country [i]-'a');
        }
    }

    printf ("%s\n",country);

    return 0 ;
}

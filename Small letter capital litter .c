#include <stdio.h>

int main ()

{
    char letter ;

    printf (" Enter the Desired letter = ");

    scanf  ("%c",&letter);

    if ( letter >= 'a' && letter<= 'z' )

    {
        printf (" %c is a small letter",letter);
    }

    else
    {
        printf (" %c is a capital letter ",letter);
    }

    return 0;
}

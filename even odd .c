#include <stdio.h>

int main ()

{
    int n ;

    printf (" Enter the value = ");

    scanf  ("%d",& n);

    if ( n%2 == 0)

    {
        printf ("%d is a Even number",n);
    }

    else

    {
        printf (" %d is odd number",n);
    }

    return 0;

}

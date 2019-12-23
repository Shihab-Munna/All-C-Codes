#include <stdio.h>

int main()
{
    double x,y,z;

    printf ("Enter The Total Value : ");

    scanf("%lf",&x);

    printf("Enter The Percentage :");

    scanf("%lf",&y);

    z = (x*y)/100;

    printf ("%0.2lf Percent of %0.2lf is = %0.2lf",y,x,z);

    return 0 ;


}

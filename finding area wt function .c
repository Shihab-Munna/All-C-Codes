#include <stdio.h>

double find_area (double radius)

{
    double pie = 3.1416;
    double area = pie*(radius*radius);

    return area;

}

double main ()

{
    double r , result ;

    printf (" Enter the Radius :");

    scanf ("%lf",&r);

    result = find_area(r);

    printf (" Area of This Circel = %0.02lf",result);

    return 0;

}

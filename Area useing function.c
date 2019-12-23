#include <stdio.h>


void area_circum(double radius, double *area, double *circum);

int main(void) {

    double radius, area, circum;

    printf("Please enter the radius of the circle: ");
    scanf("%f", &radius);

    area_circum =(radius,area);

    printf("Area of circle : %0.4f\n", area);

    return 0;
}


void area_circum(double radius, double *area, double *circum) {
    double PIE = 3.141;

    double areaC = 0;

    areaC = PIE * radius * radius;
}

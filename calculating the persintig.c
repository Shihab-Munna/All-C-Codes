#include <stdio.h>

int main ()

{
    double x , y ,z;

    printf ("Janun x,y er koto percent \n");

    printf (" x er maan input koro =  ");

    scanf  ("%lf",&x);

    printf (" Y er maan input koro =   ");

    scanf  ("%lf",&y);

    z = (x/y)*100;

    printf (" %0.2lf holo %0.2lf er %0.2lf %\n",x,y,z);

    return 0;

}

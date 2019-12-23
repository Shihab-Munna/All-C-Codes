#include <stdio.h>

int main ()

{
    double x , y ,z;

    printf (" This program will show you y er koto persent x \n");

    printf (" x er maan input koro =  ");

    scanf  ("%lf",&x);

    printf (" Y er maan input koro =   ");

    scanf  ("%lf",&y);

    z = (x/y)*100;

    printf (" %0.2lf er %0.2lf persent holo %2lf ",y,z,x);

    return 0;

}

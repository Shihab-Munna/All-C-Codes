#include <stdio.h>
int main()
{
    int num ;
    char ch ;
    float fl;
    double d_num;

    printf ("%lu\n",sizeof (int));

    printf ("Size Of int : %d Byte\n",sizeof(num));
    printf ("Size Of Char: %d Byte\n",sizeof(ch));
    printf ("Size Of Float: %d Byte\n",sizeof(fl));
    printf ("Size Of Double : %d Byte\n",sizeof(d_num));

    return 0 ;
}

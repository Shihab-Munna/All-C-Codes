#include <stdio.h>

int main()
{
    int a=47,b = 12,sum=0;
    int *x,*y,*z;

    x = &a;
    y = &b;
    z = &sum;

    sum = *x + *y;


    printf("The Total of A+B = %d\n The Address of A & B = %d %d \n The Address of Sum Veriable is =%d\n",*z,x,y,z);

    printf("\n\n\n\n");

    return 0 ;
}

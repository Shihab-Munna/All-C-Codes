#include <stdio.h>

int find_max (int num1,int num2)

{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result ;

}

int main ()

{

    int a ,b ;

    printf (" Enter the First Value :");

    scanf ("%d",&a);

    printf (" Enter the Second Value :");

    scanf ("%d",&b);

    int result = find_max(a,b);

    printf (" Largest Value is : %d",result );

    return 0;



}

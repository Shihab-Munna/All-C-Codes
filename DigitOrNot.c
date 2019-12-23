#include <stdio.h>
int check_digit(char x)
{
    if (x >= 48 && x<= 57)return 1;
    else return 0;
}

int main()
{
    char x;

    printf("Enter X :");
    x = getchar ();

    printf(" If digit Result = 1 \n If Not Digit Result = 0 \n\n Now The Result is %d.\n",check_digit(x));

    return 0 ;

}

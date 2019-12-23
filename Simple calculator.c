#include <stdio.h>
int main()
{
    char optr ;
    double x,y ;

    printf ("Pick A oparetor +,-,*,/\n");
    scanf("%c",&optr);
    printf("Enter two operands: ");
    scanf("%lf %lf",&x,&y);

    printf ("\n\n\n");

    switch(optr)
    {
            case '+':

                printf("%0.2lf+%0.2lf = %0.2lf\n\n",x,y,x+y);

                  break;

            case '-':

                printf("%0.2lf-%0.2lf = %0.2lf\n\n",x,y,x-y);

                  break;
             case '*':

                printf("%0.2lf*%0.2lf = %0.2lf\n\n",x,y,x*y);

                  break;

             case '/':

                printf("%0.2lf/%0.2lf = %0.2lf\n\n",x,y,x/y);

                  break;

            default:
            printf("Error! operator is not correct");
       }
            return 0 ;

    }

#include <stdio.h>

int main ()

{
    double loan_amount,persent_of_intrest,duration,total_pay,monthly_pay;

    printf (" Enter the total amount of loan = ");

    scanf  ("%lf",&loan_amount);

    printf (" Enter Intrest Rate = ");

    scanf  ("%lf",&persent_of_intrest);

    printf (" Enter the Duration in years =");

    scanf  ("%lf",&duration);

    total_pay = loan_amount+loan_amount*persent_of_intrest/100;

    monthly_pay = total_pay/(duration*12);

    printf (" In %0.2lf years in total You have to pay = %0.2lf Tk\n",duration,total_pay);

    printf (" Per month you have to pay =%0.2lf Tk",monthly_pay);

    return 0;


}

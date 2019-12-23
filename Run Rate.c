#include <stdio.h>
int main()
{
    int t,i,r1,r2,b,ballplayed,f;
    double req_rate,curr_rate;

    printf("How Many test? =");
    scanf("%d",&t);

    for (i=0;i<t;i++)
    {
        printf("Input 1 for :ODI \nInput 2 for :T20\n");
        scanf("%d",&f);
        if (f==1)
        {
            printf("Target;Current Run;Balls Left;");
            scanf("%d %d %d",&r1,&r2,&b);
            r1=r1-1;

            ballplayed=300-b;

            curr_rate=(r2*1.0/ballplayed*1.0)*6.0;
            req_rate=((r1*1.0-r2*1.0+1)/b*1.0)*6.0;

            printf("Current Run Rate: %0.2lf\nRequired Rate: %.2lf\n",curr_rate,req_rate);

        }

        else {

            printf("Target;Current Run;Balls Left;");
            scanf("%d %d %d",&r1,&r2,&b);
            r1=r1-1;

            ballplayed=120-b;

            curr_rate=(r2*1.0/ballplayed*1.0)*6.0;
            req_rate=((r1*1.0-r2*1.0+1)/b*1.0)*6.0;

            printf("Current Run Rate: %0.2lf\nRequired Rate: %.2lf\n",curr_rate,req_rate);

        }

    }

    return 0 ;
}


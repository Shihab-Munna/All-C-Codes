#include <stdio.h>
void sum(int a,int b){printf ("The Sum = %d\n",a+b);}
void sub(int a,int b){  printf("The sub = %d\n",a-b);}
void multi(int a,int b){ printf("The multi Result = %d\n",a*b);}
void dive (int a, int b){ printf("The divi result=%0.2f\n",(float)a/b);}
int main()
{
    int a,b;
    char x;

    printf ("Enter Your Choese:");
    scanf("%c",&x);

    if (x == 'a' || x == 'A')
    {
        printf ("Enter Two value :");
        scanf ("%d %d",&a,&b);
        sum(a,b);
    }
    else if (x == 's' || x == 'S')
    {
        printf ("Enter Two value :");
        scanf ("%d %d",&a,&b);
        sub(a,b);
    }
    else if (x == 'm' || x == 'M')
    {
        printf ("Enter Two value :");
        scanf ("%d %d",&a,&b);
        multi(a,b);
    }
    else if(x == 'd' || x == 'D')
    {
        printf ("Enter Two value :");
        scanf ("%d %d",&a,&b);
        dive(a,b);
    }
    else printf ("Wrong Key Word \n");

    return 0 ;
}

#include <stdio.h>
int main()
{
    int a,b,i,t;

    scanf("%d",&t);


    for (i=1;i<=t;i++)
    {
        scanf("%d",&a);

          if (a%2==0){
                b=a/2;
        }
        else b=(a/2)+1;


        printf("%d %d\n",b+i,b-i);
    }

    return 0 ;
}

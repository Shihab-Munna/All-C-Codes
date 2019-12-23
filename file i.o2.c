#include <stdio.h>
int main()
{
    int ara[10],i;
    FILE *input,*even,*odd;

    input=fopen("pass.txt","r");
    even=fopen("even.txt","w");
    odd=fopen("odd.txt","w");

    for (i=0;i<10;i++)
    {
        fscanf(input,"%d",&ara[i]);
    }

    for (i=0;i<10;i++)
    {
        if (ara[i]%2 == 0)
        {
            fprintf(even,"%d\n",ara[i]);
        }

        else (fprintf(odd,"%d\n",ara[i]));
    }

    return 0 ;
}

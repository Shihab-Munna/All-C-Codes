#include <stdio.h>
int main()
{
    int i,j,row,space,num;
    int x=1;

    row=5;
    space=row-3;
    num=1;

    for (i=1;i<=row;i++)
    {
        for (j=0;j<space;j++)
        {
            printf(" ");
        }
        int o=1;
        int n=((num*2)-1)/2;
        for (j=0;j<(num*2)-1;j++)
        {

            printf("%d",o);
            if (j>=n)o--;
            else o++;



        }

        printf("\n");


        if (i<3)
        {
            space--;
            num++;
        }
        else
        {
            space++;
            num--;
        }
    }
    return 0;
}

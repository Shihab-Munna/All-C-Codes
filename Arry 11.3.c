
#include <stdio.h>
int main()
{
    int i,j,totalnum=0,odd=0,even=0;
    int namta[10][10];

    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            namta[i][j]=(i+1)*(j+1);
        }
    }

    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            totalnum++;
            if (namta[i][j]%2 == 0)even++;
            else odd++;
        }
    }


    printf("Total Number = %d\nTotal Even = %d\nTotal Odd= %d\n",totalnum,even,odd);




    return 0;
}

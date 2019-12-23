#include <stdio.h>
int main()
{
    int i,j,row,space,star;
    int m=1;

    printf("Enter the Number of Row:");
    scanf("%d",&row);
    space=row-1;
    star=1;

    for (i=1;i<=row;i++)
    {
        for (j=0;j<space;j++)
        {
            printf(" ");
        }

        for (j=0;j<(star*2)-1;j++)
        {
            printf("1");
        }

        printf("\n");


        if (i<3)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
    return 0;
}

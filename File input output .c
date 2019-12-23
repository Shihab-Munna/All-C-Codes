#include <stdio.h>
int main()
{
    int i;
    FILE *fp;

    fp=fopen("pass.txt","w");

    for (i=0;i<10;i++)
    {
        fprintf (fp,"%d ",i);
    }

    return 0 ;
}

#include <stdio.h>
int main()
{
    int i,n,l;
    char str[100];

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%s",str);
        l=strlen(str);

        if (str[l-1]%2 ==0)
        {
            printf("even\n");
        }

        else printf("odd\n");

    }

    return 0 ;
}

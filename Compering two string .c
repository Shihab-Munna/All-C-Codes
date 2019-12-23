#include <stdio.h>
int string_compare(char a[],char b[])
{
    int i,j;

    for (i =0;a[i]!='\0'&& b[i]!='\0';i++)
    {
        if (a[i]<b[i])
        {
            return -1;
        }
    }
    if (string_length(a) == string_length(b))
    {
        return 0 ;
    }

    if (string_length(a) < string_length(b))
    {
        return -1;
    }

    if (string_length(a) > string_length(b))
    {
        return 1;
    }
}

int main()

{

    char str_1,char str_2;

    int c;

    printf(" Input string value 1 = ");

    fgets(str_1,100,stdin);

    printf("Input string value 2 =");

    fgets(str_2,100,stdin);

    c = string_compare(str_1,str_2);

    printf ("%d",c);

    return 0 ;



}

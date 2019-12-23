
#include <stdio.h>
#include <string.h>
int main()
{
    char x;

    x=getchar();

    switch(x)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        printf("The Letter (%c) is Vowel\n",x);
        break;

        default:

        printf("The Letter (%c) is Not a Vowel\n",x);

        break;
    }

    return 0 ;
}

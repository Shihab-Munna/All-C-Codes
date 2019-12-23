#include <stdio.h>
#include <string.h>
int main()
{
    char small_letter,capital_letter;

    printf("Please Enter A Small Letter :");
    small_letter= getchar();
    capital_letter=small_letter-32;
    printf("The Capital Letter of %c Is %c\n",small_letter,capital_letter);

    return 0;
}



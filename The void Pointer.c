#include <stdio.h>
int main()
{
    int x=10;
    float y=1.5;
    char z='a';

    void *ptr;
    ptr=&x;
    printf("%d\n",*((int*)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &z;
    printf("void ptr points to %c", *((char *)ptr));

    return 0 ;
}

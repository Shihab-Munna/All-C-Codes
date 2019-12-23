/*1-3 #include <stdio.h>
int main()
{
    char ch1='A',ch2='B';
    int n1=100,n2=100000;

    printf("Value of ch1 = %c,\t",ch1);
    printf ("The Address Of ch1 = %d\n",&ch1);

    printf("Value of ch2 = %c,\t",ch2);
    printf ("The Address Of ch2 = %d\n",&ch2);

    printf("Value of n1 = %d,\t",n1);
    printf ("The Address Of n1 = %d\n",&n1);


    printf("Value of n2 = %d,\t",n2);
    printf ("The Address Of n2 = %d\n",&n2);

    return 0 ;



}*/

/* 1-4 #include <stdio.h>
int main()
{
    int ara[5]= {50,60,70,80,90};

    printf("Value Of Array : %d, %d, %d , %d, %d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);

    printf("Address of ara is %p\n",&ara);

    printf("Address Of Ara[0] is :%p\n",&ara[0]);
    printf("Address Of Ara[1] is :%p\n",&ara[1]);
    printf("Address Of Ara[2] is :%p\n",&ara[2]);
    printf("Address Of Ara[3] is :%p\n",&ara[3]);
    printf("Address Of Ara[4] is :%p\n",&ara[4]);

    return 0 ;
}*/

/*1-5 #include <stdio.h>
int main()
{
    int num ;
    char ch ;
    float fl;
    double d_num;

    printf ("%lu\n",sizeof (int));

    printf ("Size Of int : %d Byte\n",sizeof(num));
    printf ("Size Of Char: %d Byte\n",sizeof(ch));
    printf ("Size Of Float: %d Byte\n",sizeof(fl));
    printf ("Size Of Double : %d Byte\n",sizeof(d_num));

    return 0 ;
}
*/
/*2-1 #include <stdio.h>
int main()
{
    int x= 10;

    printf("Value of x is = %d\n",x);
    printf("Address of X :%p\n",&x);

    return 0 ;
}*/

/*2-2#include <stdio.h>
int main()
{
    int x =100;
    int *ptr;

    ptr=&x;

    printf("Address of X : %d\n",ptr);
    printf("*p = %d\n",*ptr);
    printf("Value of p is %p\n",ptr);

    return 0 ;
}*/

/*2-3
#include <stdio.h>
int main()
{
    double  pi =3.14159268358;

    int *ptr;

    ptr = &pi;

    //printf("Address of X : %d\n",ptr);
    printf("Value of Pi = %lf\n",pi);
    printf("Value of Pi = %lf\n",*ptr);

    return 0;

}*/
/* 2-4
#include <stdio.h>
int main()
{
    int x=10;
    int *ptr;

    ptr=&x;

    *ptr=20;

    printf("The value of x : %d\n",x);
    printf("The Address of x :%p\n",ptr);
    printf("Value of P =%d\n",ptr);
    printf("Value of P =%d\n",ptr);

    return 0;

}*/

#include <stdio.h>
int main()
{
    int x = 10;
    int *p;

    printf("The value of x = %d\n",x);

    p=&x;
    *p= 20;

    printf("The vaule of x : %d\n",x);
    x=15;

    printf("The value of X: %d\n",x);
    printf("The value stored at location :%p is %d\n",p,*p);

    printf("The address of x : %p\n",&x);
    printf("The value of p : %p\n",p);

    return 0 ;
}
/* 2-6
#include <stdio.h>
int main()
{
    int x =10;
    int y;
    int *p;

    printf("Value of x : %d\n",x);

    p= &x;
    y=*p;
    *p=15;


    printf("Value of X : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *p : %d\n",*p);
    printf("Address of x : %p\n",&x);
    printf("Address of y : %p\n",&y);
    printf("Value of p : %p\n",p);

    return 0 ;

}
*/

/* 2-7
#include <stdio.h>
int main()
{
    int x=10, y;

    int *p,*q;

    p=&x;
    y=*p;
    *p=15;
    *q=20;

    printf("Value of X : %d\n",x);//10
    printf("Value of y : %d\n",y);//10
    printf("Value of *p: %d\n",*p);//15
    printf("Value of *q =%d\n",*q);//20

    return 0 ;
}
*/

/* 2-10
#include <stdio.h>
int main()
{
    int x = 100;
    int *p = NULL;

    printf("The Value Of x:%d\n",x);
    p=&x;
    printf("The value of *p: %d\n",*p);

    return 0 ;
}
*/
/*2-13
//string Pointer :
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Bangladesh";
    char *ptr;

    ptr=str;

    printf("Name of Country:%s\n",str);
    printf("address of Str :%s\n",ptr);

    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    char c1='A',c2='B',c3='C';
    char *p1,*p2,*p3 ;

    p1=&c1;
    p2=&c2;
    p3=&c3;

    printf("%c, %c, %c\n",*p1,*p2,*p3);

    return 0;
}
*/

/*#include <stdio.h>
int main()
{
    int data[10];
    int i;

    for(i=0;i<10;i++)
    {
        scanf("%d",&data+i);
    }

    for(i=0;i<10;i++)
    {
         printf("%d\n",*data+i);
    }

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char* s1 = "Hello";
    char* s2 = "World";
    s1 = (char*)((int)s1 + (int)s2);
    s2 = (char*)((int)s1 -(int) s2);
    s1 = (char*)((int)s1 - (int)s2);

    printf("%s:%s", s1, s2);
}
*/
/*2-15

#include <stdio.h>
int main()
{
    char c='A';
    char *p;
    p=&c;

    printf("Address of c: %p\n",p);
    printf("Address of p: %p\n",&p);

    return 0;
}*/

/*
2-16
#include <stdio.h>
int main()
{
    char c='A';
    char *p,**q;
    p=&c;
    q=&p;

    printf("Value of c: %c\n",c);//A
    printf("value of c: %c\n",*p);//A
    printf("value of c: %c\n", **q);//A

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char c='A';
    char *p,**q;

    p=&c;
    q=&p;

    **q='B';

    printf("The Value of c : %c\n",c);//A
    printf("The value of c : %c\n",*p);//A
    printf("The value of c : %c\n",**q);//B

    return 0;
}*/

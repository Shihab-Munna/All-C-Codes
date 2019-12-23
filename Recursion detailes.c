/* 4-2
#<stdio.h>
int x=1;

void myfnc(int y)
{
    y=y*2;
    x=x+10;
    printf("myfnc,x =%d, y =%d\n",x,y);
}

int main()include
{
    int y =5;
    x=10;

    myfnc(y);//x=20 , y=10

    printf("mainfnc,x=%d,y=%d\n",x,y);//x=20 ,y=5

    return 0 ;
}*/

/* ToDo..#include <stdio.h>

int x=10;
void myfnc(int y)
{
    printf("myfnc y = %d\n",y*2);
    printf("myfnc x= %d\n",x);
}

int main()
{
    int x=5;
    int y=2;

    myfnc(y);

    printf("The value of x in mainfnc: %d\n",x);

    return 0 ;
}
*/
/* 4-3
#include <stdio.h>

int a;
static int b;

void func()
{
    a=a+1;
    b=b+1;

}

int main()
{
    func();

    printf("a = %d\nb = %d\n",a,b);
    return 0;
}*/
/*
4-4
#include <stdio.h>

void func ()
{
    int a =10;
    static int s = 10;

    a = a+2;
    s = s+2;

    printf("a = %d ,s =%d\n",a,s);
}

int main()
{
    func();
    func();
    func();

    return 0;
}
*/
/*4-5
#include <stdio.h>
void recurse()
{
        char *s="Hurry ! I am learning recursion \n";

        printf("%s\n",s);

        recurse();
}

int main()
{
    recurse();
    return 0 ;
}
*/
/* 4-6
#include <stdio.h>
void recurse(int x)
{
    if (x==5)return;

    printf("Hello ! I am Munna\n");
    recurse(x+1);
    return ;
}

int main()
{
    recurse(1);
    return 0 ;
}
*/
/*
4-7
#include <stdio.h>

void recurse (int x)
{
    if (x>5)return;

    printf("Count :%d\n",x);
    recurse(x+1);
}

int main()
{
    recurse(1);
    return 0 ;
}
*/
/*
4-8
#include <stdio.h>

void recurse(int x)
{
    char n='D';
    if (x>5)
    {
    return ;
    }
    recurse(x+1);
    printf(" %dst time\n",x);
}

int main()
{
    recurse(1);
    return ;
}
*/
/*4-9
#include <stdio.h>
void recurse (int count)
{
   int sum=0,sum2=0;
    if (count > 5 )return ;
    printf("Count %d\t",count);
    sum=sum+count;
    printf("Sum = %d\n",sum);
    recurse(count+1);
    printf("Count last =%d\t",count);
    sum2=sum2+count;
    printf("Sum = %d\n",sum2);
}

int main()
{
    recurse(1);
    return 0;
}

*/
/*4-10
#include <stdio.h>
void recurse ()
{
    static int count=1;
    if (count > 5)return;
    printf("Count = %d\n",count);
    count+=1;
    recurse();
}
int main()
{
    recurse();
    return 0 ;
}
*/
/*
#include <stdio.h>
void hello(int x)
{
    if (x>5)return ;
    printf("Hello!\n");

    hi(x);
    hello(x+1);
}
void hi (int x)
{
    if (x>5)return;
    printf("hi :)\n");
    hi(x+1);
}

int main()
{
    hello(1);//
    return 0;
}
*/
/*4-14
#include <stdio.h>
int factorial(int n)
{
    if (n==0 )return 1;
    return n*factorial(n-1);
}

int main()
{
    int n ;

    scanf("%d",&n);
    if (n<0)printf("Undefined !\n");
    else printf("Factorial of %d : %d\n",n,factorial(n));

    return 0;
}
*/

#include <stdio.h>
i//nt sum(int n)
{
    int total=0;
    if (n==0)return;

    total=total+sum(n-1);
    return total;

}
int main()
{
    printf("The result is : %d\n",sum(5));
    return;
}

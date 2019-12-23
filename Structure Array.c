#include <stdio.h>
struct person
{
    char name [20];
    int age;
    float salary;
};
int main()
{
    struct person person[2];

    int i;
    for (i=0;i<2;i++)
    {
        printf("Enter information For person %d:",i+1);
        fflush(stdin);
        gets(person[i].name);
        scanf("%d",&person[i].age);
        scanf("%f",&person[i].salary);

    }
    for (i=0;i<2;i++)
    {
        printf("\n\n");
        printf("Info Of Person %d = \nName: %s\nAge:%d\nSalary:%0.2f\n",i+1,person[i].name,person[i].age,person[i].salary);

    }


    return 0 ;
}


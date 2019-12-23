#include <stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person munna,ayon;

    printf("Enter information For person 1:");
    scanf("%d",&munna.age);
    scanf("%f",&munna.salary);

    printf("Enter information For person 2:");
    scanf("%d",&ayon.age);
    scanf("%f",&ayon.salary);

    if(munna.age == ayon.age && munna.salary == ayon.salary)
    printf("They Are Equle\n");
    else
    printf("They are not Equle\n");

    //printf("Munna Age = %d\nSalary =%0.2f\n",munna.age,munna.salary);
    //printf("Ayon Age = %d\nSalary =%0.2f\n",ayon.age,ayon.salary);

    return 0 ;
}


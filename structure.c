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

    printf("Munna Age = %d\nSalary =%0.2f",munna.age,munna.salary);
    printf("Ayon Age = %d\nSalary =%0.2f",ayon.age,ayon.salary);

    return 0 ;
}

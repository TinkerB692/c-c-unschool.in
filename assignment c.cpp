/*Write a program,keeping following details in mind:
1. use structure to store details of employee such as name, employee id, experience and salary
2. store details of 5 employees and print them.*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
    char name[20];
    int employee_id;
    float salary;
    char experience[10];
};
int main()
{
    int i=0,n=5;
struct employee emp[n];
printf("Enter %d Employee details\n\n",n);
for(i=0;i<n;i++)
{
    printf("Employee %d:\n",i+1);

    printf("Enter name:");
    scanf("%s",emp[i].name);
    printf("Enter employee Id:");
    scanf("%d",&emp[i].employee_id);
    printf("Enter salary:");
    scanf("%f",&emp[i].salary);
    printf("Enter experience:");
    scanf("%s",&emp[i].experience);
    printf("\n");
}

    {
    printf("\nEntered details are:\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d:\n",i+1);
    printf("\nName:%s",emp[i].name);
    printf("\nEmployee Id:%d",emp[i].employee_id);
    printf("\nSalary:%f",emp[i].salary);
    printf("\nExperience:%s",emp[i].experience);
    printf("\n");
    }
    }
    return 0;
}


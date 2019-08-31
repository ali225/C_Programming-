#include <stdio.h>

struct employee {
	char name[100];
	int age;
	float salary;
	struct address
	{
		int houseNumber;
        char street[100];
    }location;

    struct address * inner_ptr  ;
};

struct employee employee_one;

struct employee *outer_ptr ;


int main(){



   outer_ptr = &employee_one ;
   employee_one.inner_ptr = &employee_one.location ;
   //struct address Location ;

   printf("Enter Name, Age, Salary of Employee : \n");
   scanf("%s %d %f", employee_one.name, &employee_one.age,&employee_one.salary);

   printf("Enter House Number and Street of Employee : \n");
   scanf("%d %s", &employee_one.location.houseNumber, employee_one.location.street);

   printf("Employee Details :\n");
   printf(" Name : %s\n Age : %d\n Salary = %f\n House Number : %d\n Street : %s\n", \
   employee_one.name, employee_one.age, employee_one.salary, \
   outer_ptr->inner_ptr->houseNumber , outer_ptr->inner_ptr->street);

   return 0;
}

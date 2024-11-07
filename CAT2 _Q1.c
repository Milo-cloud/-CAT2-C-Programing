
#include <stdio.h>
#include <string.h>

struct employee {
	char name[25];
	int id;
	char department [20];
	float salary;
	char email[50];
	
	
	
};
int main(){
	struct employee employee;
	strcpy(employee.name,"John Doe");
	strcpy(employee.department,"Human Resources");
	strcpy(employee.email,"john.doe@company.com");
	employee.salary=55000.50;
	employee.id=1234;
	
	
	printf("Name:%s\n",employee.name);
	printf("ID number:%d",employee.id);
	printf("\nDepartment:%s",employee.department);
	printf("\nSalary:%.2f",employee.salary);
	printf("\nEmail:%s",employee.email);
	return 0;
}
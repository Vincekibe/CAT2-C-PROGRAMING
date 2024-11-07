//structure for employee details.
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24  */


#include <stdio.h>
//defining a structure named employee that contains the following fields.
   struct employee{
   char name[25];
   int id;
   int department[20];
   float salary;
   char email[50];
   };
int main(){
    //declaring variables and initializing
    struct employee employee1;
    strcpy(employee1.name, "John Doe");
    employee1.id=12345;
    strcpy(employee1.department, "Human Resources");
    employee1.salary=55000.50;
    strcpy(employee1.email, "john.doe@company.com");

    //printing the initialized employee information
    printf("The employee name is %s\n", employee1.name);
    printf("The employee id number is %d\n", employee1.id);
    printf("The employee works in the department of %s\n", employee1.department);
    printf("The employee earns a salary of %f\n", employee1.salary);
    printf("The employee email is %s\n", employee1.email);

  return 0;
}

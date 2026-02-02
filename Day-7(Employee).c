
/*#include <stdio.h>
#include<string.h>

struct student{
    int Id;
    float salary;
    
};
int main() {
    struct student emp[3];
    printf("---Employee Details---\n");
    printf("Employee 1:\n");
     emp[1].Id = 2007;
     emp[1].salary = 50000;
     printf("Employee Id: %d\n",emp[1].Id);
    printf("salary: %.2f\n",emp[1].salary);
      printf("Employee 2:\n");
     emp[2].Id = 2029 ;
     emp[2].salary = 50000;
     printf("Employee Id: %d\n",emp[2].Id);
    printf("salary: %.2f\n",emp[2].salary);
      printf("Employee 3:\n");
     emp[3].Id = 2907;
     emp[3].salary = 50000;
    printf("Employee Id: %d\n",emp[3].Id);
    printf("salary: %.2f\n",emp[3].salary);
    
    
    return 0;
} */                                          



#include <stdio.h>
#include<string.h>

struct student{
    int Id;
    float salary;
    
};
int main() {
    struct student emp[3];
    printf("---Employee Details---\n");
   int i;
   for(i=0;i<3;i++){
       
   printf("Employee %d:\n",i+1);
   printf("Employee Id:\n");
   scanf("%d",&emp[i].Id);
   printf("Salary:\n");
   scanf("%f",&emp[i].salary);
   }
   printf("---Employee Details---\n");
   for(i=0;i<3;i++){
    printf("Employee %d\n",i+1); 
    printf("Employee Id: %d\n",emp[i].Id);
    printf("salary: %.2f\n",emp[i].salary);
   }
    
    return 0;
}                                           

Output:
---Employee Details---
Employee 1:
Employee Id:
2029
Salary:
10000
Employee 2:
Employee Id:
2028
Salary:
30000
Employee 3:
Employee Id:
2025
Salary:
40000
---Employee Details---
Employee 1
Employee Id: 2029
salary: 10000.00
Employee 2
Employee Id: 2028
salary: 30000.00
Employee 3
Employee Id: 2025
salary: 40000.00


=== Code Execution Successful ===


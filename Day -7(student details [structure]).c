
#include <stdio.h>
#include<string.h>

struct student{
    int reg;
    char name[20];
    int mark;
    
};
int main() {
    struct student stud1;
    printf("---Student Details---\n");
    printf("Student 1:\n");
    stud1.reg = 8;
    strcpy(stud1.name,"Deepika");
    stud1.mark = 525;
    printf("Roll No:%d\n",stud1.reg);
    printf("Name:%s\n",stud1.name);
    printf("Mark:%d",stud1.mark);
    
    return 0;
}


Output:
---Student Details---
Student 1:
Roll No:8
Name:Deepika
Mark:525

=== Code Execution Successful ===
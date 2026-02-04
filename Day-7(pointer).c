
#include<stdio.h>
#include<string.h>
struct student {
    int Id;
    char name[10];
    
};

struct address {
    char city[10];
    int pincode;
    struct student details;
};

void printstudentDetails(struct address *Student){
    printf("Student ID: %d\n",Student->details.Id);
    printf("Name: %s\n",Student->details.name);
    printf("City: %s\n",Student->city);
    printf("Pincode: %d",Student->pincode);
}

int main(){
    struct address Student;
    Student.details.Id = 8;
    strcpy(Student.details.name,"Deepika");
    strcpy(Student.city,"Udumalpet");
    Student.pincode = 642204;
    printf("---Student Details---\n");
    printstudentDetails(&Student);
    return 0;
    
    
}

Output:
---Student Details---
Student ID: 8
Name: Deepika
City: Udumalpet
Pincode: 642204

=== Code Execution Successful ===


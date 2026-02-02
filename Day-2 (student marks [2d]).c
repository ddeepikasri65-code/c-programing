#include <stdio.h>

int main() {
     int n,m,mark[10][10],sum=0;
     float avg;
     printf("---STUDENT MARK DETAILS---\n");
     printf("Enter the no of students\n");
     scanf("%d",&n);
     printf("Enter the no of subjects\n");
     scanf("%d",&m);
     for(int i=0;i<n;i++){
         printf("Enter the student mark %d\n",i+1);
     for(int j=0;j<m;j++){
         printf("Enter the subject mark %d\n",j+1);
         scanf("%d",&mark[i][j]);
         sum = sum+mark[i][j];
     }avg=sum/m;
     printf("The average mark of student %d is %.2f ",n,avg);
     
     }
     
     
    

    return 0;
}
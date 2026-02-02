#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i;
    int *array;
    printf("---Student mark details---\n");
    printf("Enter the number of subjects:\n");
    scanf("%d",&n);
    
    array = (int*)malloc(n*sizeof(int));
    if(array == NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory is allocated\n");
    }
    printf("Enter the Marks:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("The Subjects Marks are:\n");
    for(i=0;i<n;i++){
        printf("Subject %d marks is %d\n",i+1,array[i]);
    }
    free(array);{
        printf("Memory is deleted");
    }
    return 0;
    
    
}


Output:
---Student mark details---
Enter the number of subjects:
5
Memory is allocated
Enter the Marks:
87
65
87
65
97
The Subjects Marks are:
Subject 1 marks is 87
Subject 2 marks is 65
Subject 3 marks is 87
Subject 4 marks is 65
Subject 5 marks is 97
Memory is deleted

=== Code Execution Successful ===
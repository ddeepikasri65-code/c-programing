#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i;
    int *array;
    printf("Enter the number of employee IDs:\n");
    scanf("%d",&n);
    
    array = (int*)calloc(n,sizeof(int));
    if(array == NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory is allocated\n");
    }
    printf("Enter the employee ID:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("The Employee IDs are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
    printf("Enter the new employee\n");
    scanf("%d",&m);
    
    array = (int*)realloc(array,m*sizeof(int));
    if(array == NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory is allocated\n");
    }
    printf("Enter the new employee ID:\n");
    for(i=n;i<m;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<m;i++){
    printf("The Ids %d is:%d\n",i+1,array[i]);
    }
    free(array);{
        printf("Memory is deleted");
    }
    return 0;
    
    
}

Output:
Enter the number of employee IDs:
2
Memory is allocated
Enter the employee ID:
32
23
The Employee IDs are:
32
23
Enter the new employee
3
Memory is allocated
Enter the new employee ID:
45
The Ids 1 is:32
The Ids 2 is:23
The Ids 3 is:45
Memory is deleted

=== Code Execution Successful ===



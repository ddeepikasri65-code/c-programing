
#include <stdio.h>
//global scope
int newvar=30;
int myfunction(int a,int b){
    //local scope
    int newvar=50;
    printf("newvar:%d\n",newvar);
    return a + b;
}

int main() {
    int value = myfunction(5,9);
    printf("newvar:%d\n",newvar);
    printf("The value is: %d",value);
    

    return 0;
}
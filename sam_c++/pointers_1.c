#include <stdio.h>
int largest(int *num1,int *num2);
int main() {
    int first_number,second_number;
    printf("Enter two numbers:");
    scanf("%d%d",&first_number,&second_number);
    largest(&first_number,&second_number);
    return 0;
}
int largest(int *num1,int *num2){
    if(*num1>*num2){
        printf("%d is the largest",*num1);
    }
    else if(*num2>*num1){
        printf("%d is the largest",*num2);
    }
    else{
        printf("%d and %d are equal",*num1,*num2);
    }
}

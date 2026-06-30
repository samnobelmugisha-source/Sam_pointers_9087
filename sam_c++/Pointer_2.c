#include<stdio.h>
int array(int *n,int *arr);
int main(){
    int i,j;
    printf("Enter the number of elements you want to enter\n");
    scanf("%d",&j);
    int Array[j];
    printf("Enter the numbers\n");
    for(i=0;i<j;i++){
        scanf("%d",&Array[i]);
    }
    array(&j,Array);
}
int array(int *n,int *arr){
    int k;
    printf("The numbers entered by a user are:\n");
    for(k=0;k<*n;k++){
        printf("%d\n",*(arr+k));
    }
}
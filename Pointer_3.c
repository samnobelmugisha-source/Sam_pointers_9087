#include <stdio.h>
void sum_array(int *n, int array[]);
int main()
{
    int i, j;
    printf("Enter number of elements: ");
    scanf("%d", &j);
    int arr[j];
    printf("Enter the integers in the array:\n");
    for(i = 0; i < j; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum_array(&j, arr);
    return 0;
}
void sum_array(int *n, int array[])
{
    int sum = 0;
    int k;
    for(k = 0; k < *n; k++)
    {
        sum += array[k];
    }
    printf("The sum of elements in the array is: %d\n", sum);
}
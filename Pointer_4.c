#include <stdio.h>
int str_length(char *str);
int main()
{
    char arr[100];
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);
    printf("Length = %d\n", str_length(arr));
    return 0;
}
int str_length(char *str)
{
    int count = 0;
    while (*str != '\0' && *str != '\n')
    {
        count++;
        str++;
    }
    return count;
}
#include<stdio.h>
int main()
{
    // Variable num1, num2, num3
    int num1, num2, num3;

    // Get the input from the user
    printf("Enter the num1, num2, num3 values: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Prints the output
    printf("The average of three numbers %d, %d and %d is %d\n", num1, num2, num3, (num1+num2+num3)/3);
    return 0;
}
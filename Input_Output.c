#include<stdio.h>
int main()
{
    // Variables num1 and num2
    int num1, num2, sum;

    // Get the input from the user
    printf("Enter the num1 value: ");
    scanf("%d", &num1);
    printf("Enter the num2 value: ");
    scanf("%d", &num2);

    sum = num1+num2;
    
    // Print the output
    printf("The sum is %d\n", sum);
    return 0;
}


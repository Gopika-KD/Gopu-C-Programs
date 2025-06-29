#include<stdio.h>
int main()
{
    // Variable a, b, min
    int a, b, min;

    // Get the input from the user
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Find the smallest num
    min = a * (a < b) + b * (b < a);

    // Prints the output
    printf("The Smalest number is %d", min);
    return 0;
}
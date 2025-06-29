#include<stdio.h>
int main()
{
    // Variable n
    int n;

    // Get the input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prints the output
    printf("The cube of %d is %d\n", n, n*n*n);

    return 0;
}
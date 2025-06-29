#include<stdio.h>
int main()
{
    // Variable a,b
    int a,b;

    // Get input from the user
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d %d", &a, &b);
    
    // Print the output
    printf("Perimeter of a rectangle is %d units\n", 2*(a+b));

    return 0;
}
#include<stdio.h>
int main()
{
    // Variable side1, side2
    int side1;
    float side2;

    // Get input from the user
    printf("Enter the side1 and side2 of a square: ");
    scanf("%d %f", &side1, &side2);
    
    // Print the output
    printf("Area of a square in int is %d\n", side1 * side1);
    printf("Area of a square in float is %f\n", side2 * side2);

    return 0;
}

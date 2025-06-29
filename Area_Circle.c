#include<stdio.h>
int main()
{
    // Variable radius
    float radius;

    // Get input from the user
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    
    // Print the output
    printf("Area of a circle is %f\n", 3.14*(radius*radius));

    return 0;
}
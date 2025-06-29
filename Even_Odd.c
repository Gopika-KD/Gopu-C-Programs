#include<stdio.h>
/* If the number is even then it returns True -> 1
   If the number is odd then it returns False -> 0 */
int main()
{
    // Variable a
    int a;

    // Get the input from the user
    printf("Enter a number: ");
    scanf("%d", &a);

    // Prints the output
    printf("%d", a % 2 == 0);
    return 0;
}
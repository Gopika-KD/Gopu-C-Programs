#include<stdio.h>
/* If divisible by 2 then it returns True -> 1
   If not divisible by 2 then it returns False -> 0 */
int main()
{
    // Variable x
    int x;

    // Get the input from the user
    printf("Enter the number: ");
    scanf("%d", &x);

    // Prints the output
    printf("%d", x % 2 == 0);
    return 0;
}
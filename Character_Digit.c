#include<stdio.h>
/* If character entered is a digit then it returns True -> 1
   If character entered is not a digit then it returns False -> 0*/
int main()
{
    // Variable a
    char a;

    // Get the input from the user
    printf("Enter a character: ");
    scanf("%c", &a);

    // Prints the output
    printf("%d", (a >= '0' && a <= '9'));
    return 0;
}
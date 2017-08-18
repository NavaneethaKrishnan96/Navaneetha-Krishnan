#include <stdio.h>
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        if (n == 0)
            printf("You entered 0");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
  
}

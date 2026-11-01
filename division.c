#include <stdio.h>

int main()
{
    int a, b, division;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        division = a / b;
        printf("Division = %d", division);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}

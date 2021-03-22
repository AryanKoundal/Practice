#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if ((a % 2) == 0)
    {
        printf("The number is Even\n");
    }
    else if ((a % 2 != 0))
    {
        printf("The number is Odd\n");
    }
    
    return 0;
}
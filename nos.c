#include <stdio.h>
int main()
{
    int x, i, j;
    int sum = 0;
    printf("enter the number");
    scanf("%d", &x);
    for (i = 0; x > 0; i++)
    {
        j = x % 10;
        x = x / 10;

        sum = sum + j;
    }
    printf("%d", sum);
    return 0;
}
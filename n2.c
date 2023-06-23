#include <stdio.h>
int main()
{
    int x, i, j;
    printf("enter the number");
    scanf("%d", &x);
    for (i = 1; x > 0; i++)
    {
        x = x / 10;
        if (x == 0)
            printf("%d", i);
    }

    return 0;
}
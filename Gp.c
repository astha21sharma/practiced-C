#include <stdio.h>
int main()
{
    int n, i, j;
    printf("till which value u want to mention");
    scanf("%d", &n);
    j = 1;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", j);
        j = j * 2;
    }
}

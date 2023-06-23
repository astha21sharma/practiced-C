#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d", &n);
    int i;
    for (i = 1; i < n;)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        i++;
        printf("\n");
        int a = 65;
        for (int j = 1; j <= i; j++) // tricky part
        {
            printf("%c", a);
            a += 1;
        }
        i++;

        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
          {  // {int a=n/2;
            if (i == j || j == n+1-i)//||i == n || j == n)
                printf("*");

            else
            {
                printf(" ");
            }
    }
    printf("\n");
}
return 0;
}
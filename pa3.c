#include <stdio.h>
int main()
{int n,m;
printf("enter the number of rows ");
scanf("%d",&n);
// printf("enter the number of columns ");
// scanf("%d",&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // for (int j = n-1; j <= n; j++)
        // {
        //     printf(" ");
        // }
        printf("\n");
    }
    return 0;
}

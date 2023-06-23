#include <stdio.h>
int main()
{int n,m;
printf("enter the number of rows ");
scanf("%d",&n);
printf("enter the number of columns ");
scanf("%d",&m);
    for (int i = 0; i < n; i++)//no of rows
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}

//mast dry run code
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2*i;)//tricky part
        {
            // printf("1");
            printf("%d", j);
            j+=2;
        }

        printf("\n");
    }
    return 0;
}
//MY CODE
// OR approach

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++) // tricky part
        {
            // printf("1");
            printf("%d", a);
            a += 2;
        }

        printf("\n");
    }
    return 0;
}

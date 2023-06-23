#include <stdio.h>

int prime(int n);

int main()
{
    int n, i, j = 0;
    int sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    //  printf("%d", prime(n));
    for (i = 2; i <= n; i++)
    {
        if (prime(i) == 2)
        {
            printf("hi\n");
        }
    } // for (i = 1; i <= n; i++)
      // {
      //     if (n % i == 0)
      //         j++;
      // }

    return 0;
}
//     else
//         printf("not prime");
//     return 0;
//     int i, n;
//     printf("enter the number");
//     scanf("%d", &n);
//     int sum = 0;
//     for (i = 2; i < n; i++)
//     {
//          prime(i);
//         if (prime(i)== 2)
//         {
//             sum += i;
//             printf("%d", sum);
//         }
//     }

//     return 0;
// }
int prime(int n)
{
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            j++;
    }
    printf("%d", j);
}
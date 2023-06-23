// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number of rows ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 65; j < 65+n;j++)//tricky part 
//         {
//             // printf("1");
//             printf("%c", j);
//         }

//         printf("\n");
//     }
//     return 0;
// }


//OR

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {int a=65;
        for (int j = 1; j <=i;j++)//tricky part 
        {
            // printf("1");
            printf("%c", a);
            a+=1;
        }

        printf("\n");
    }
    return 0;
}

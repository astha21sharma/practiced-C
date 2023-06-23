// #include <stdio.h>
// int main()
// {
//     int arr[2][2]; // deined its an 2d array such that2 rows 2 columns
//     arr[0][0] = 1;
//     arr[1][0] = 9;
//     arr[0][1] = 8;
//     arr[1][1] = 7;
//     printf("%d", arr[1][1]);
//     return 0;
// }
// OR
// #include <stdio.h>
// int main()
// {
//     int arr[2][2] = {{1, 8}, {9, 7}};
//     ; // deined its an 2d array such that2 rows 2 columns
//     printf("%d", arr[1][1]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("entre the number");
            scanf("%d\n", &arr[i][j]);
            printf("%d\t",arr[i][j]);
        }
    }
   
    return 0;
}

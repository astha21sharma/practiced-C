// #include <stdio.h>
// //*********revreseing of array***************
// //calling function
// int opar(int arr[],int n)
// {printf("{");
//     for (int i = 0; i < n; i++)
//     {

//         printf(" %d, ", arr[i]);
//     }
//     printf("}");}

// int main()
// {
//     int arr[6];
//     for (int i = 0; i < 6; i++)
//     {
//         printf("\nenter the number %d", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     opar(arr,6);

//     for (int j = 0; j < 3; j++)
//     {
//         // arr[j] = arr[5- j];
//         int firs = arr[j];
//         int scnd = arr[6 - j - 1];
//         arr[j] = scnd;
//         arr[6 - j - 1] = firs;
//     }
//     printf("\n");
//      opar(arr,6);

//     return 0;
// }
//////////////////////SHORTCUT OF REVERSING/////////////////

#include <stdio.h>
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("enter the number %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 5; j >= 0; j--)
    {
        printf(" %d,", arr[j]);
    }
    return 0;
}

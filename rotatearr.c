// #include <stdio.h>
// int main()
// {
//     // if (k>n)
//     // {
//     //     for(int i=0;k<n;i++)
//     //     {
//     //         k=k-n*i;
//     //     }
//     // }
//     int arr[] = {1, 2, 3, 4, 5, 6, 7}; // yahan pe mujhe kuch {1,2,6,5,4,3,7} kuch aisa chaiye
//     // which is not possible the way i am doing it

//     for (int i = 2, n = 7; i < 4; i++)
//     {
//         {
//             int temp = arr[i];
//             arr[i] = arr[n - i];
//             arr[n - i] = temp;
//         }
//     }
//     for (int i = 0; i < 7; i++)
//     {
//         printf("%d,", arr[i]);
//     }
//     return 0;
// }

//************BY SIR**************
#include <stdio.h>
void reverse(int arr[], int i, int j)
{
    for (i, j; i < j; i++, j--) // reversing part of array
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("{");
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("}");
    int n = 7;
    int k;
    printf("\nhow many times u want to rotate\n");
    scanf("%d", &k);
    // steps
    k = k % n;
    printf("\nthe rotation to be done is %d ", k);
    // for rotation k=3
    // index 1-4 tak reverse karna hai
    reverse(arr, 0, n - 1);
     printf("\n");
    reverse(arr, 0, k - 1);
     reverse(arr, k, n - 1);
    printf("{");
    for (int i = 0; i < 7; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("}");
    return 0;
}
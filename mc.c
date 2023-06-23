// #include <stdio.h>
// int main()
// {
//     int n;

//     printf("the no. to be multifies");
//     scanf(" %d", &n);
//     for (int i = n; i <= 20;)
//     {
//         printf("%d\n", i);
//         i = i + n;
//     }
//         return 0;

// }

//     int i, charge;
//     float j;
//     printf("The number of units consumed:");
//     scanf("%d", &i);
//     if (i <= 150 && i > 0)
//         charge = 1;
//     else if (i > 150 && i <= 250)
//         charge = 2;#include <stdio.h>
// int main()
// {
//     else
//         charge = 3;
//  printf("%d\n", charge);
//     j = i * charge;
//     printf("%f\n", j);
//     return 0;
// }

// /* Function to get sum of digits */
// int getSum(int n)
// {
//     int sum = 0;
//     while (n != 0) {
//         sum = sum + n % 10;
//         n = n / 10;
//     }
//     return sum;
// }

// // Driver code
// int main()
// {
//     int n = 687;

//     // Function call
//     printf(" %d ", getSum(n));
//     return 0;
// }

#include <stdio.h>
int reverse(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4};
    int i = 4;
    reverse(arr, i);
    return 0;
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int first = arr[i];
        int scnd = arr[n - i - 1];
        arr[i] = scnd;
        arr[n - i - 1] = first;
        for (int j = 0; j < n; j++)
            printf("%d\t", arr[j]);
    }
}


// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[7] = {7,6,5,4,3,2,1};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 0; i < 7; i++)
//     {
//         if (max < arr[i])
//             max = arr[i];
//     }
//     for (int i = 0; i < 7; i++)
//     {
//         if (smax < arr[i] && arr[i] != max)
//             smax = arr[i];
//     }
//     printf("%d\n  ", max);
//     printf("%d", smax);
//     return 0;
// }
//**************OR********************
// this is good for the case in which the smax is is befor teh max value
// but if it is something like arr{5,4,3,2,1 }
/*#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {4, 8, 1, 3, 6, 7, 3};
    int max = INT_MIN;
    int max2 = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
    }

    if (max == arr[0])
    {
        for (int i = 1; i < 7; i++)
        {
            if (max2 < arr[i])
            {
                max2 = arr[i];
            }
        }
    }
    else
    {
        max2 = smax;
    }

    printf("%d\n", max);
    printf("%d\n", max2);

    return 0;
}*/ // perfect code for increasing and decreasing code---by astha

// #############SIR KA WAY#####################
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {1,2,7,1,7,4,5};
    int max = INT_MIN;

    int smax = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i]&& max!=arr[i] )
        //&& max!=arr[i] is used for the case if there are two same numbers tahn they usually print the two both same
            smax = arr[i];
    }

    printf("%d\n", max);
    printf("%d\n", smax);

    return 0;
}//perfect code by sir works for every case

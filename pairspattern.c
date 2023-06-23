// find the number of pairs in the array whose sum is x
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totpair = 0;
    int x = 12;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (x - arr[i] == arr[j])
            {
                totpair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("%d", totpair);
    return 0;
}
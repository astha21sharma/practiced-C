//duplicate is similar like checking for pairpattern whose sum would be x
#include <stdio.h>
int main()
{
    int arr[8] = {1,2, 3, 7, 5, 6, 7, 8};
    int dup = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate number\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
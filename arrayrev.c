#include <stdio.h>
int main()
{
    // we can even use for loops for taking inputs
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nenter the number %d", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("{");
    for (int i = 0; i < 5; i++)
    {

        printf(" %d, ", arr[i]);
    }
    printf("}");
    return 0;
}

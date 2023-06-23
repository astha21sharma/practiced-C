//perfect code
#include <stdio.h>

void delete(int a[], int size, int *num, int p, int *item)
{
    *item = a[p];
    if (*num == 0)
    {
        return;
    }
    else
    {
        for (int i = p; i < *num - 1; i++)
        {
            a[i] = a[i + 1];
        }
        *num = *num - 1;
    }
}
int main()
{

    int num;
    
    int arr[90];
    int item;
    printf("how many number arealready in the array");
    scanf("%d", &num);
    printf("%d\n", num);

    for (int i = 0; i < num; i++)
    {
        printf("enter the numbers of the array");
        scanf("%d", &arr[i]);
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    delete (arr, 90, &num, 2, &item);
    printf("now the numbers in the array are %d\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\nthe number removed was %d\n", item);
    return 0;
}
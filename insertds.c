//perfect inserting code
#include <stdio.h>

void insert(int a[], int size, int *num, int item, int p)
{
    if (size == *num)
    {
        return;
    }
    else
    {
        for (int i = *num - 1; i >= p; i--)
        {
            a[i + 1] = a[i];
        }
        a[p] = item;
        *num = *num + 1;
    }
}
int main()
{
    int arr[100];
    int num;
    printf("how many number arealready in the array");
    scanf("%d",&num);
    printf("%d\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the numbers of the array");
        scanf("%d", &arr[i]);
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    insert(arr,100, &num, 2, num/2);//using & in the main function is very imp after using it as a pointer otherwise the code wouldn,t work ever
    // insert(arr, 8,num, item, 3);
    //  insert(arr, 8,num, item, 5);
    for (int i = 0; i <num; i++)
    {
        printf("%d,", arr[i]);
    }

    printf("\n%d\n", num);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];
    int item;
    printf("enter the numbres");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i < n; i++)
    {
        item = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = item;
    }
   for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); 
    return 0;
}
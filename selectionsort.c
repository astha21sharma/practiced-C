#include <stdio.h>

void swap(int x, int y)

{
    int z;
    z = x;
    x = y;
    y = z;
    // printf("a=%d & b= %d\n",x,y);
}

void sortf(int arr[], int size) // sort are the no. of numbers which are already sorted

{int j;
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i], index = i;
        //  printf("%d",min);
        // printf("\n");

        for ( j = i+1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index = j;
                // printf("%d ",j);
            }
        }
        // printf("\n%d",min);
        // printf("\n");
        swap(arr[i], min);
        //  printf("%d",arr[j]);
    
    }

    return;
}
int main()
{
    int a[5];
    printf("enter the numebrs of an array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d,", &a[i]);
    }
    // int sort;
    // printf("the numbers which are initially sorted are ");
    // scanf("%d", &sort);
    // printf("%d",sort);
    sortf(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}


for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i], index = i;
        //  printf("%d",min);
        // printf("\n");

        for ( j = i+1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index = j;
                // printf("%d ",j);
            }
        }
        // printf("\n%d",min);
        // printf("\n");
        swap(arr[i], min);
        //  printf("%d",arr[j]);
    
    }
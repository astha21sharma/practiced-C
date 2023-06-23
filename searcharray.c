


#include <stdio.h>
#include<stdbool.h>
int search(int arr[], int n, int x)
{
    int i;
    int c=0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            
            break;
        }
        else{
            c++;
        }
    }
    
    if (c == n)
    {
        printf("nope %d is not found\n and the index is %d", x,i);
    }
    else
    {
        printf("search for %d is successful\n", x);
    }
}
int main()
{
    int i;
    int c = 0;
    int arr[] = {1, 2, 3, 4, 5};
    search(arr, 5, 10);
   
    return 0;
}
//***using BOOL*******
#include <stdio.h>
#include<stdbool.h>
int search(int arr[], int n, int x)
{
    int i;
    int c=0;
    bool flag=false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag=true;
            break;
        }
        
    }
    printf("the index is %d\n", i);
    if (flag== false)
    {
        printf("nope %d is not found\n", x);
    }
    else
    {
        printf("search for %d is successful\n", x);
    }
}
int main()
{
    int i;
    int c = 0;
    int arr[] = {1, 2, 3, 4, 5};
    search(arr, 5, 10);
   
    return 0;
}
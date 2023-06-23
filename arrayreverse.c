##//palindrome code.....clear solution below
#include <stdio.h>
int reverse(int arr[], int n);
// int print(int arr[], int n);
 int palindriome(int arr[], int n,int c);
int main()
{
    int arr[4] ;
    int temp[4];
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the %d term\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        temp[i] = arr[i];
    }
    int brr[4];
    reverse(arr, 4);
    // print(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        brr[i] = arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", temp[i]);
        if (temp[i] == brr[i])
            c++;
    }
    // printf("%d\n", c);
    // if (c == 4)
    // {
    //     printf("yes,it is the palindrome\n");
    // }
    // else
    //     printf("nopes.\n");
     palindriome(arr, 4,c);
    return 0;
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        //    int  first=arr[i];
        //     int scnd=arr[n-i-1];
        //     arr[i]=scnd;
        //     arr[n-i-1]=first;
        //**OR
        int time = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = time;
    }
}

// int print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     //     printf("\n");
// }

int palindriome(int arr[], int n,int c)
{
   
    if (c == n)
    {
        printf("\nyes,it is the palindrome");
    }
    else
        printf("nopes.\n");
}


//Cleaar summary code
#include <stdio.h>
int reverse(int arr[], int n);
 int palindriome(int arr[], int n,int c);
int main()
{
    int arr[4] ;
    int temp[4];
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the %d term\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        temp[i] = arr[i];
    }
    int brr[4];
    reverse(arr, 4);
    // print(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        brr[i] = arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", temp[i]);
        if (temp[i] == brr[i])
            c++;
    }
    
     palindriome(arr, 4,c);
    return 0;
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        
        int time = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = time;
    }
}



int palindriome(int arr[], int n,int c)
{
   
    if (c == n)
    {
        printf("\nyes, it is the palindrome");
    }
    else
        printf("\nnopes.\n");
}
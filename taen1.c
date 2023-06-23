#include<stdio.h>
 #include <stdbool.h>
 
 int main()
 {
     
     int arr[7] = {1, 3, 2, 4, 3, 2, 1};
     
     for (int i = 0; i < 7; i++)
     {bool flag = true;
         for (int j = i + 1; j < 7; j++)
         {
             if (arr[i] == arr[j])
             {
                 flag = false;
                 
             }
             else
                 continue;
         }
         if (flag == true)
             printf("%d number which stores %d\n", i, arr[i]);
     }
    return 0;
}
// mera socha hua idea for uique calculation
//  #include <stdio.h>
//  #include <stdbool.h>
//  int sap(int n)
//  {
//      int sum=(n+1)*n/2;
//      printf("%d", sum);
//  }
//  int main()
//  {
//      bool flag = true;
//      int arr[7] = {1, 3, 2, 4, 3, 2, 1};
//      int sum=0;
//      for (int i = 0; i < 7; i++)
//      {
//          for (int j = i + 1; j < 7; j++)
//          {
//              if (arr[i] == arr[j])
//              {
//                  flag = false;
//                  printf("%d,%d\n",i,j);
//                  sum=sum+i+j;
//              }
//              else
//                  continue;
//          }
//          if (flag = false)
//              printf("%d number which stores %d\n", i, arr[i]);
//      }printf("%d\n",sum);
//      sap(6);

//     // int unique=sum2-sum;
//     // printf("%d\n",unique);
//     return 0;
// }
// sir wala
#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int arr[7] = {1, 3, 2, 4, 3, 2, 1};
    
    
    for (int i = 0; i < 7; i++)
    {bool flag = true;//ye imp hai soch thoda
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = false; // inka mtlb smjhna yahan break isiliye use nhi kiya kyunki break mtlb break from both the loops
            }
            else
            continue;
        }
        if(flag == true)
           { printf("%d\n", arr[i]);
        break;}
    }
    return 0;
}
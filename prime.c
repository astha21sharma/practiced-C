#include <stdio.h>
int main()
{
    int n, i, j=0;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            j++;
    }


    if (j == 2)
        printf("%d is the prime number ",n);
    else
        printf("%d is the not a prime number ",n);
    return 0;
}

// #include <stdio.h> 

//  int main() {
//   int n, i, c = 0;
//   printf("Enter any number n:");
//   scanf("%d", &n);

//   //logic
//   for (i = 1; i <= n; i++) {
//       if (n % i == 0) {
//          c++;
//       }
//   }

//   if (c == 2) {
//         printf("%d is a Prime number",n);
//   }
//   else {
//          printf("%d is not a Prime number",n);
//   }
//   return 0;    }
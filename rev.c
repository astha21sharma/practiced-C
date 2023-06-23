#include <stdio.h>
int fibo(int n);
int fib(int n);

int main()
{
    int i;
    printf("print the numbers");
    scanf("%d", &i);
    fibo(i);
    return 0;
}

// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//         {return n;}

//     int fiboN = fibo(n - 1) + fibo(n - 2);
  
//     printf("fibo of %d is %d\n",n, fiboN);
//     return fiboN;
//  }
int fib(int n)
{
    if (n == 0 || n == 1)
        {return n;}

    int fibN = fib(n - 1) + fib(n - 2);
  
    
     return fibN;
}

int fibo(int n)
{
    for (int j=0;j<n;j++)
    printf(" %d",fib(j));
}
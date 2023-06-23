#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("print the number till which u want the series to exist");
    scanf("%d", &n);
    printf(("the exact %d is %d"),n,fibo(n));
    return 0;
}

int fibo(int n)
{

    if (n <= 1)
    {return n;}
   
    int fiboN = fibo(n - 1) + fibo(n - 2);
    printf(" fibo of %d is %d\n",n, fiboN);
    return fiboN;
}

 // {if (n==0)
    //     return 0;
    // }
    // if (n == 1)
    // {
    //     return 1;
    // } // n=0/1 isiliye direct n likh diya
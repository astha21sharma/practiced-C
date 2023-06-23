#include <stdio.h>//aa gya finally

int main()
{
    int i;
    printf("The number of units consumed:");
    scanf("%d", &i);
    int fib[i];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t",fib[0]);
     printf("%d\t",fib[1]);
    for (int j=2;j<i;j++)  
    
    {

        fib[j]=fib[j-1]+fib[j-2];
        printf("%d\t",fib[j]);
    }
    return 0;
}
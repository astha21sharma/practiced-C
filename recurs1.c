#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter the no.till u want");
scanf("%d",&n);
   printf("%d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 1) // base case
    {
        return 1; // bcz sum of 1 natural number is 1
    }//int sum1=;
    int sumN = sum(n-1) + n; // we can see it with this prospective

    return sumN;
}

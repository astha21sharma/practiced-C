#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("enter the no.till u want");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 0 || n==1)//in RECURSSION BASE VALUE CONDITION MUST BE MENTIONED

    {
        return 1;
    }

    int factN = fact(n - 1) * n;
    return factN;
}



//OR




#include <stdio.h>

int fact(int n)
{
    int factN = 0;
    if (n == 1 || n==0)
        return 1;
    factN = fact(n - 1) * n;
    return factN;
}

int main()
{
    int n;
    printf("enter the no.till u want");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

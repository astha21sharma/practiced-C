#include <stdio.h>

int sum(int a, int b);
void table(int n);

int main()
{
    int x, y, s, m, n;
    printf("enter the number a");
    scanf("%d", &x);
    printf("enter the number a");
    scanf("%d", &y);
    s = sum(x, y);
    printf("%d\n is the sum", s);
    printf("the no. to be multifies");
    scanf(" %d",&n);
    table(n);
        return 0;
    
}

    int sum(int a, int b)
    {
        return a + b;
    }

    void table(int n)
    {
        for (int i = n; i <= 50;)
        {
            printf("%d\n", i);
            i = i + n;
        }
    }
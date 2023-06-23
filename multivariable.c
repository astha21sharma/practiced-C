#include <stdio.h>

void dowork(int a, int b, int *, int *, int *);

int main()
{
    int i, j, sum, prod, avg;
    printf("enter the numbers");
    scanf("%d %d", &i, &j);

    dowork(i, j, &sum, &prod, &avg);
    printf("sum=%d\nprod=%d\navg=%d\n", sum, prod, avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *pro, int *avg)
{
    *sum = a + b;
    *pro = a * b;
    *avg = (a + b) / 2;
}
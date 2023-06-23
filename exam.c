#include <stdio.h>//aa gya finally

int main()
{
    int i, charge;
    float j;
    printf("The number of units consumed:");
    scanf("%d", &i);
    if (i <= 150 && i > 0)
        charge = 1;
    else if (i > 150 && i <= 250)
        charge = 2;
    else
        charge = 3;

        j = i*charge;
    printf("%f\n", j);
    {if (j > 300)
    {
        j = (j * 0.125) + j;
        printf("total %f", j);
    }
    else if (j < 75)
    {
        j = 75;
        printf("total %f", j);
    }
    else
        printf("total %f", j);}
    return 0;
}
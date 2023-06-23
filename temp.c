#include <stdio.h>

float temp(int n);

int main()
{
    float n;
    printf("enter the celcius u want to convert");
    scanf("%f", &n);
    printf("%.2f is the farenheit temp", temp(n));
    return 0;
}

float temp(int n)
{
    if (n == 0)
    {
        return 32;
    }

    float tempN = (1.8* n)+32;
    return tempN;
}



//OR
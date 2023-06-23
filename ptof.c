#include <stdio.h>

// void square(int n);
void _square(int* );

int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
`
    _square(&n);
    printf(" is %d",n);
    return 0;
}
// call by value
// void square(int n)
// {
//     n = n * n;
//     printf("%d\n", n);
// }

void _square(int* n)
{
    *n = (*n )* (*n);
        printf(" sq %d\n", *n);
}
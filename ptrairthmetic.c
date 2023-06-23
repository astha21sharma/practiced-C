#include <stdio.h>
int main()
{
    int n = 44;
    int *ptr = &n;
    printf("%u\n", ptr);
  ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%d\n", *ptr);
    return 0;
}
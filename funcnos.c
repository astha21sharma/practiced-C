#include <stdio.h>

int nos(int x);

int main()
{
  int n;
  printf("enter the number");
  scanf("%d", &n);
  printf("%d", nos(n));
  return 0;
}

int nos(int x)
{
  int sum = 0;
  while (x > 0)
  {
    int j = x % 10;
    x = x / 10;

    sum = sum + j;
  }
  return sum;
}

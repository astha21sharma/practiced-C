#include <stdio.h>
void display();
void main()
{
    int i = 0;
    for (i = 0; i < 3; i++)
        display();
}

void display()
{
    static int x = 5;
    int y = 5;
    x++;
    y++;
    printf("x=%d ", x);
    printf("y=%d\n", y);
}
#include <stdio.h>
void printhello();
void printbye();

int main()//function call
{
    printhello();
    printbye();
    printhello();

    printbye();

    return 0;
}

void printhello()
{
    printf("hello\n!");
}

void printbye()
{
    printf("goodbye!\n");
}
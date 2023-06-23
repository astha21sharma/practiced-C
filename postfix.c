#include <stdio.h>
#define n 5
char stack[n];
int top = -1;

void push(char x)
{
    if (top == n - 1)
    {
        printf("overflowed");
    }
    else
     {  top++;
    stack[top] = x;}
}

char pop()
{
    if (top == -1)
        printf("stack is empty");
    else
    {return stack[top--];}
    // {
    //     char item = stack[top];
    //     top--;
    //     printf("%d", item);
    // }
}

int priority(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
  return -1;
}

int main()
{
    char exp[20];
    char *p;
    char x;
    printf("enter the expression");
    scanf("%s", exp);
    p = exp;
    while (*p != '\0')
    {
        if (isalnum(*p))
            printf("%c", *p);
        else if (*p == '(')
            push(*p);
        else if (*p == ')')
        {
           // x = pop();
            while ((x=pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*p))
                printf("%c", pop());
            push(*p);
        }
        p++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}
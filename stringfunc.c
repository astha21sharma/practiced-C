#include <stdio.h>
#include<string.h>
int length(char arr[]);

int main()
{
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
        
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
     str[i] = '\0';
    puts(str);
    printf("%d",length(str));
    return 0;
}

int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;//kyunki count pehle he value le leta hai before cheecking condition
    //and length mein mujhe null ko count hi nhi karna
    
}
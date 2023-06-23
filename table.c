#include <stdio.h>
int main()
{
    int j,n,i;

    printf("which table u want to print");
    scanf("%d",&n);
    //j=i+n;
    for (i=n;;i=i+n)//for infinite loop
    {
        printf("%d\n",i);
        
    }
    return 0;
} 
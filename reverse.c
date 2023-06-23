#include <stdio.h>

int main()
{int rem,num,rev=0;
 printf("Enter the number");
 scanf("%d",&num);
 for(int i=0;num>0;i++)
 {rem=num%10;
    rev=rev*10+rem;
    num=num/10;
 }
 printf("%d is the reverse",rev);
 return 0;
}


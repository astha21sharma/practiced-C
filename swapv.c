#include <stdio.h>

void swap(int x,int y);

int main()
{int x,y;
printf("enter the no. u want to swap");
scanf("%d  %d",&x,&y);
swap(x,y);
printf("a=%d b=%d",x,y);
return 0;

}

void swap(int x,int y)

{int z;
z=x;
x=y;
y=z;
printf("a=%d & b= %d\n",x,y);

}
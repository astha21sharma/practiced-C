// insert sorting perefct
#include <stdio.h>
void sortf(int a[],int n,int sort)
{for(int i=sort-1;i<n-1;i++)
{
 int j=i+1;
 int item=a[j];
 while(a[i]>item && i>=-1)
 {
    a[i+1]=a[i];
    i=i-1;
 }
 a[i+1]=item;
//sort++;
}
}
int main()
{
    int a[5]; 
    printf("enter the numebrs of an array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d,", &a[i]);
    }
    int sort;
    printf("the numbers which are initially sorted are ");
    scanf("%d",&sort);
    // printf("%d",sort);
    sortf(a, 5, sort);
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}
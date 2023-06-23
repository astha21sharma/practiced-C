# include <stdio.h>

int main()
{
    int aadhar[5];
    
    // input
    int *ptr=aadhar;
    for (int i=0;i<5;i++)
    {
        printf("%d index",i);
        scanf("%d",(ptr+i));
        
    }

    // output
     for(int j=0;j<5;j++){
        printf("%d index =%d\n",j,*(ptr+j) );
     }
    return 0;
}
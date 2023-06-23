#include <stdio.h>

int main()
{
    float array[3];
    printf("enter the 3 prices");
    scanf("%f %f %f",&array[0],&array[1],&array[2]);
    printf("%f\n",array[0]+(0.18*array[0]));
    printf("%f\n",array[1]+(0.18*array[1]));
    printf("%f\n",array[2]+(0.18*array[2])); 
    return 0;
}

// or


#include <stdio.h>

int main()
{
    float array[3];
    printf("enter the 3 prices");
    scanf("%f %f %f",&array[0],&array[1],&array[2]);
    
    for ( int i=0;i<3;i++)
    {
        printf("%.f\n",array[i]+(0.18*array[i]));
    }
    return 0;
}

//if the array is of size 5 and we try to print array[10] it thus show an out of bond error

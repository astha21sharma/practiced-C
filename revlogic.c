#include <stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the number %d\n", i + 1);
        scanf("%d", &marks[i]);
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     if (marks[i] < 35)

    //     {
    //         printf(" %d ", i);
    //     }

    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     sum = sum + marks[i];
    //     printf("%d ", sum);
    // }
    //////
    /////////
    ////////////
    /////////// ////////////
    //************max in the array**************
    // int max = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (max < marks[i])
    //     {
    //         max = marks[i];
    //     }
    // }
    // printf("%d ", max);

    //
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)

            marks[i + 2] += marks[i];
        else
            marks[i + 2] += marks[i];

    }
    printf("{");
    for (int i = 0; i < 10; i++)
    {

        printf(" %d, ", marks[i]);
    }
    printf("}");
    return 0;
}
#include <stdio.h>

int main()
{
    int marks[2][3]; //---|---

    // input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)

        {
            scanf("%d", &marks[i][j]);
            printf("marks[%d][%d]:%d \n", i, j, marks[i][j]);
        }
          printf("%d \n",  marks[2][0]);
    }
    return 0;
}
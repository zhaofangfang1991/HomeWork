#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[3][3][4] =
    {
      {
            {1,3,5,6},
            {4,5,3,9},
            {3,4,7,8}
       },
        {
              {1,3,5,6},
              {4,5,3,9},
              {3,4,7,8}
         },
        {
              {1,3,5,6},
              {4,5,3,9},
              {3,4,7,8}
         },
    };

    int i, j, k;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                //a[i][j][k] = k;
                printf("%lu ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}

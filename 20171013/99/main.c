#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;
    int j = 1;
    for(i = 1; i < 10 ; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d,%d ", i,j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    int rand_num[4];
    int guess num[4];
    int num;
    int n = 0;
    int i = 0;
    printf("caishuzi  \n");

    srand( (unsigned int )time(NULL) )

    for(i = 0; i < 4; i++)
    {
        rand_num[i] = rand()%10;

    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char *argv[])
{
    srand( (unsigned int)time(NULL) );
    int i = 0;
    int num;
    for(i = 0; i< 10; i++ )
    {
        num = rand();
        printf("num = %d\n",num);
    }



    return 0;
}

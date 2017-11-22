#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[10];
    int b;

    for(b=0;b<10;b++)
    {
        a[b]=b+1;
        printf("%d  ",b);
    }
        printf("\n");
    return 0;
}

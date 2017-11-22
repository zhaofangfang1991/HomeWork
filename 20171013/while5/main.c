#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    int a = 0;
    while (a<=100)
    {
        sum = sum+a;
        a = a+2;
    }
    printf("%d",sum);
    return 0;
}

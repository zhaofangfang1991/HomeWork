#include <stdio.h>
int main(int argc, char *argv[])
{
    int a = 1;
    int sum = 0;
    while(a<=100)
    {
       sum=sum+a;
       a=a+1;
    }
    printf("%d",sum);
    return 0;
}

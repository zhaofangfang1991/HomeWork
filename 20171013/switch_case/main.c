#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;
    printf("shu ru\n");
    scanf("%d",&num);
    switch ( num )
    {
    case 1 :
            printf("one\n");
            break;
    case 2 :
            printf("two\n");
            break;
    case 3 :
            printf("three\n");
            break;
    default:
            printf("NO");
            break;
    }
    return 0;
}

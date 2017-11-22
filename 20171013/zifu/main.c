#include <stdio.h>

int main(int argc, char *argv[])
{
    char a7[10] = "abc";
    printf("a7 = %s\n",a7);
     char a8[] = "abc";
     char a9[] = "\012abc";
     printf("a9 = %s\n", a9);
     printf("sizeof(a8) = %lu", sizeof(a8));
    return 0;
}

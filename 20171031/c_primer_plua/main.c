#include <stdio.h>

int main(int argc, char *argv[])
{
    // 1、两个函数
    void buffer(void);

    printf("before buffer()\n");
    buffer();
    printf("afrer buffer\n");
    return 0;
}

void buffer()
{
    printf("I'm buffer\n");
}

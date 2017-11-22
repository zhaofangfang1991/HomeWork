#include <stdio.h>
#include "test.h"

int main()
{
    // static全局变量
    // 两个.c文件可以同名定义一个静态全局变量， static int a = 0;
    // static 全局变量的作用范围是当前文件


    // memset(变量,设置的值,sizeof(变量));
    // memcpy(给哪个变量拷贝,从哪个变量拷贝,拷贝多长);// 不会因为结束符而停止拷贝
}

void fun2()
{
    extern int a;
    printf("fun2 a=%d\n", a);
}

int a =10;
void fun()
{
    printf("before a=%d\n", a);
    a = 11;
}
int main02()
{
    /*8、普通全局变量
    提前用，需要声明； extern int a;
    声明extern只是针对全局变量；
    在编译阶段就会分配空间
    */
    fun2();
    //fun();
    //printf("a = %d\n", a);

    test();
    printf("main aa = %d\n",aa);
}


int main01(int argc, char *argv[])
{
    // 10天，栈区

    /*4、
     * 普通局部变量：作用域为当前大括号；也叫自动变量;
     * static变量
     * 普通全局变量
     * static全局变量
     * 普通函数和static函数的区别
    */

    // 不同的{}，变量名称可以一样
    int a = 10;
    if (1)
    {
        int a = 11;
    }
    // 说明：这是在两个{}中，可以有同名的变量，打印和使用，是就近原则

    /*6、static局部变量*/
    /*
    普通局部变量：有效作用域是同一个大括号内部；程序运行到定义的那一行才会分配空间；调用完毕销毁；不初始化值为随机数；
    static局部变量：有效作用域同上；编译时，分配空间；程序运行结束销毁；不初始化，值为0；
    */
    return 0;
}

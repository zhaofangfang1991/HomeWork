#include <stdio.h>
#include <string.h>

// 定义结构体
struct Student
{
    int age;
    char name[50];
    int  score;
};

int main(int argc, char *argv[])
{
    struct Student stu1;
    stu1.age = 18;
    strcpy(stu1.name, "hello");

    printf("age = %d\n", stu1.age);
    printf("name = %s\n",stu1.name);


    // 指针变量
    struct Student *p;
    p = &stu1;
    p->age = 20;
    printf("p->age = %d\n", p->age);
    return 0;
}

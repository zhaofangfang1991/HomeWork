#include <stdio.h>
#include <string.h>

//结构体数组
struct Auth
{
    int age;
    char name[100];
    float score;
};

int main()
{
    // 一步到位main03做的事
    struct Auth a[5] = {
        {18, "zhang_3", 59},
        {19, "li_4", 66},
        {20, "wang_5", 87},
        {21, "zhao_6", 77},
        {22, "fangfang", 68}
    };
    // 循环打印结构体数组
    int i = 0;
    int n = sizeof(a)/sizeof(a[0]);

    // 求平均分
    float avg = 0;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        printf("Hello,Mr.%s,your age is %d,your score is %.2f\n", a[i].name, a[i].age, a[i].score);

        sum += a[i].score;// 71.4

    }
    printf("%f", sum);
    avg = sum/n;
    printf("avg is %.2f", avg);

}

int main03()
{
    struct Auth a[5];

    a[0].age = 18;
    strcpy(a[0].name, "zhangsan");
    a[0].score = 59;

    (a+1)->age = 19;
    strcpy((a+1)->name, "lisi");
    (a+1)->score = 61.1;

    (*(a+2)).age = 20;
    strcpy((*(a+2)).name, "wangwu");
    (*(a+2)).score = 62.2;

    struct Auth *p;
    p = &a[0];

    p[3].age = 21;
    strcpy(p[3].name, "zhaoliu");
    p[3].score = 63.3;

    (p+4)->age = 22;
    strcpy((p+4)->name, "wangba");
    (p+4)->score = 64.4;

    // 循环打印结构体数组
    int i = 0;
    int n = sizeof(a)/sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        printf("Hello,Mr.%s,your age is %d,your score is %.2f\n", a[i].name, a[i].age, a[i].score);
    }
}

// 新的一天，先复习
/*struct Student
{
    int age;
    char name[100];
    float score;
};*/

struct Student
{
    int age;
    char name[100];
    float score;
}stu1;

int main02()
{
    struct Student stu1;
    stu1.age = 18;
    strcpy(stu1.name, "zhaofangfang1991");
    stu1.score = 20.5;

    printf("hello,Mr.%s, your age is %d, your score is %.2f", stu1.name, stu1.age, stu1.score);
}

// 定义结构体
/*struct Student
{
    int age;
    char name[50];
    int  score;
};*/

int main01(int argc, char *argv[])
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

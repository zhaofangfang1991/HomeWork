#include <stdio.h>

int main(int argc, char *argv[])
{
    /*int a[5][10];
    printf("sizeof(a)  %lu\n", sizeof(a));

    printf("sizeof a[0]=%lu\n", sizeof(a[0]));

    printf("sizeof a[0][0]=%lu\n", sizeof(a[0][0]));

    //qiu hang

    int n = sizeof(a)/sizeof(a[0]);
    printf("hang = %d\n", n);

    //lie

    int n1 = sizeof(a[0])/sizeof(int);
    printf("lie = %d\n", n1);

    //hang*lie
    int n3 = sizeof(a)/sizeof(int);
    printf("hang*lie = %lu\n", n3);*/

     //pingjunfen
     int a[5][3] = {
        {12,34,56},
        {334,55,66},
        {33,44,66},
        {22,55,77},
        {55,44,56}
    };
    int sum = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum = sum + a[j][i];

        }

        printf("pinjunfen %1f\n",sum/5.0);
    }



    return 0;
}

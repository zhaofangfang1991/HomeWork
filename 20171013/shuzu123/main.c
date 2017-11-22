#include <stdio.h>

int main(int argc, char *argv[])
{
   /* int a[10];
    //printf("a = %p,&a[0] = %p\n",a,&a[0]);
    printf("sizeof(a) = %lu\n",sizeof(a));
    printf("sizeof(a[0]) = %lu\n",sizeof(a[0]));
    int n = sizeof(a)/sizeof(a[0]);
    printf("n = %d\n",n);
    int b[] = {1,1,1,1,1,1,1,1,1,1,1,1,1};*/


/* int a = 10;
 int b = 20;
 int c = 30;

 int max;
 if(a>b)
 {
  max = a;
 }
 else
 {
     max = b;
 }
 if(max > c)
 {
    printf("da   :%d\n",max);
 }
 else
 {
    printf("da   :%d",c);
 }*/

    int a = 10;
    int b = 20;
    int c = 30;

    int max;
    max = (a>b ? a : b)>c ? (a>b ? a : b) :c;
    printf("dd   :%d",max);




    return 0;
}


















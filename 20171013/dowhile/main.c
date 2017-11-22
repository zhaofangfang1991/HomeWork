#include <stdio.h>

int main(int argc, char *argv[])
{
   int a = 1;
   int sum = 0;
   do
   {
       sum += a;
       a++;
   }
   while(a<=100);
   printf("%d",sum);
    return 0;
}

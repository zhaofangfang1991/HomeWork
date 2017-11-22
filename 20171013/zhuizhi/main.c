#include <stdio.h>

int main(int argc, char *argv[])
{
   /* int a = 10;
    int b = 20;
    int c = 30;
    int max;
    max =  (a > b ? a : b) > c ? (a > b ? a :b) : c;
    printf ("max = %d\n",max);

    int a[] = {1,2,3,56,66,77,90,7,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    int max = a[0];

    int i = 0;
    for(i = 1; i < n; i++)
    {
      if(a[i] > max)
      {
          max = a[i];
      }

    }
    printf("max = %d\n",max);*/

    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int i = 0;
    int j = n-1;
    int tmp;

    while(i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] =tmp;
        i++;
        j--;

     }
    for(i = 0; i < n; i++)
    {
        printf("%d   ", a[i]);
    }
    printf("\n");














    return 0;
}

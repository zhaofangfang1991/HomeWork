#include <stdio.h>

int main(int argc, char *argv[])
{
   int a[] = {1,-1,2,-2,3,-3,4,-4,5,-5};
   int n = sizeof(a)/sizeof(a[0]);
   int i = 0;
   int j = 0;
   int tmp;


   printf("paiqian");

   for(i = 0; i < n; i++)
   {
       printf("%d  ", a[i]);

   }
   printf("\n");


   for(i = 0; i < n-1; i++)
   {
       for(j = 0; j < n-1-i; j++)
       {
           if(a[j] > a[j+1])
           {
               tmp = a[j];
               a[j] = a[j+1];
               a[j+1] = tmp;


           }

       }
   }

   printf("paihou");
   for(i = 0; i < n; i++)
   {
       printf("%d  ",a[i]);
   }
   printf("\n");









    return 0;
}

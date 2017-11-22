#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /*char str[] = "1,2,3";
    int a,b,c;
    sscanf(str,"%d,%d,%d",&a,&b,&c);
    printf("a = %d, b = %d, c = %d\n",a,b,c);


    char tmp[] = "abc mike 520";
    char m[10], n[10], k[10];

    sscanf(tmp,"%s %s %s,", m, n, k);
    printf("m = %s, n = %s, k = %s\n", m, n, k);*/


    /*char buf[] = "abcdefg";
    char *p = strchr(buf,"d");

    if(p == NULL)
    {
        printf("shibai");
    }
    else
    {
        printf("p = %s", p);
    }*/
    /*char buf[] = "abcdefghi";
    char *p = strstr(buf,"cde");
    if(p == NULL)
    {
      printf("shibai\n");
    }
    else
    {
      printf("p = %s\n", p);
    }*/



    char buf[] = "abc jiang 520";
    char tmp[100];
    strcpy(tmp, buf);
    char *p;

    p = strtok(tmp, ",");
    while(p != NULL)
    {
        printf("p = %s\n", p);
        p = strtok(NULL,",");
    }

















    return 0;
}

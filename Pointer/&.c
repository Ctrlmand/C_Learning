#include <stdio.h>
int f(int *p);
int g(int k);
int main(void) 
{   
    // int i = 6;
    // printf("&i=%p\n", &i);
    // f(&i);
    // g(i);
    int i=5;
    int *p = &i;
    printf("*p=%p\n", *p);
    printf("p=%d\n", p);
    printf("p[0]=%d", p[0]);
    return 0; 
}

int f(int *p)
{
    printf(" p=%p\n", p);
    printf("*p=%d\n", *p);
    p = 26;
}
int g(int k)
{
    printf("k=%d\n", k);
}
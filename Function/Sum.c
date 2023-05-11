#include <stdio.h>
void sum( int began, int end)
{
    int i;
    int sum =0;
    for ( i=began; i<=end; i++) {
        sum += i;
    }
    printf ("Sum is %d\n",sum);
}


int main ()
{
    sum ( 1, 10);
    sum ( 20, 30);

    return 0;
}
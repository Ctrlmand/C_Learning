#include <stdio.h>
int serch( int key, int a[], int length);
int main(void)
{
    int a[] = {1,2,6,23,13,45,78,95,32,45,84,32,14,54};
    int x;
    int loc = 0;
    scanf ("%d", &x);

    loc = serch( x, a, sizeof(a)/sizeof(a[0]));
    if ( loc != -1) {
        printf ("loc:%d", loc);
    } else {
        printf ("not appear");
    }

    return 0;
}

int serch( int key, int a[], int length)
{
    int ret = -1;
    int i;
    for ( i=0; i<length; i++) {
        if ( a[i] == key) {
            ret = i;
            break;
        }
    }
    return ret;
}
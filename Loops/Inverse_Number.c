#include <stdio.h>
int main()
{
    int x;
    int digit;
    int ret = 0;

    scanf("%d",&x);

    while( x > 0) {
        digit = x % 10;
        ret = ret * 10 + digit;
        x /= 10;
        // printf ("%d",digit);
    }

    printf("%d",ret);

    return 0;
}
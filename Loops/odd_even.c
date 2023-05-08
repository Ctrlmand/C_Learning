#include <stdio.h>
int main()
{
    int x;
    int odd = 0;
    int even = 0;

    do
    {
        scanf("%d",&x);
        if ( x % 2 == 1)
        {
            odd ++;
        } else if ( x % 2 == 0)
        {
            even ++;
        }
    } while ( x != -1);
    
    printf("odd:%d,even:%d", odd, even);
    return 0;
    
}
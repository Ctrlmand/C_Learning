#include <stdio.h>
int main()
{
    int x;
    int digit;
    int ret = 0;
    int power = 1;
    int count = 1;

    scanf("%d",&x);
    
    do {
        digit = x % 10;
        x /= 10;
        if ( digit % 2 == 1 )
        {
            if ( count % 2 == 1)
            {
                ret += power;
            }
            
        } else if ( digit % 2 == 0)
            {
                if ( count % 2 == 0)
                {
                    ret += power;
                }
                
            }
        power *= 2;
        count ++;
    } while ( x > 0);

    printf ("%d",ret);
    
    return 0;
}
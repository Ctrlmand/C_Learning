#include <stdio.h>
int main()
{
    int x;
    int count = 0;
    
    // scanf("%d", &x);

    //for ( x=2; x<100; x++) {
    x = 2; 
    while ( count < 50) {
        int isprime = 1;

        for (int i = 2; i < x; i++)
        {
            if ( x % i == 0)
            {
                isprime = 0;
                break;
            }
            
        }
        if ( isprime == 1)
        {
            printf ("%d ",x);
            count ++;
        }       
    x++;
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int x;
    int summary = 0;
    int count = 0;


    scanf("%d", &x); 
    while ( x != -1) {
        summary += x;
        count ++;
        scanf("%d", &x);
    }

    printf("%f", 1.0*summary/count);

    return 0;
    
}
#include <stdio.h>
int main()
{
    int x;
    int i;
    double sum = 0.0;

    double sign = 1.0;//+-

    scanf ("%d",&x);

    for ( i=1; i <= x; i++)
    {
        sum += sign/i;
        sign = -sign;//-+
    }
    printf("%f\n", sum);

    return 0;
    
}
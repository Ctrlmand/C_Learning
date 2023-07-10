#include <stdio.h>
int f(void) 
{
    char word0[8];
    char word1[8];
    scanf("%s", word0);
    scanf("%s", word1);

    printf("%7s", word0);
    printf("%7s", word1);
    printf("%s##%s##\n", word0, word1);
    return 0;
}

int main(void)
{
    f();

    return 0;
}

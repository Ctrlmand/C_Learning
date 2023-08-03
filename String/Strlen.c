#include <stdio.h>
#include <string.h>
int main(/*int argc, char const *argv[]*/)
{
    char line[] = "Hello";
    printf("%lu\n", strlen(line));
    printf("%lu\n", sizeof(line));
    return 0;
}
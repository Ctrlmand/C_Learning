#include <stdio.h>
#include <string.h>
int main()
{
    int exit = -1;
    char st0[100];
    char c = '.';
    do{
        scanf("%s", st0);
        int len = strlen(st0);
        if(st0[len-1] == c) {
            exit = 1;
            // printf("exit == 1\n");
        }
        int r = strlen(st0);
        if(exit != 1) {
            printf("%d ", r);
        } else{
            printf("%d", r-1);
        }
    } while (exit != 1);


    return 0;
}
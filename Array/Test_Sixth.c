#include <stdio.h>
int main (void) 
{
    //const int number = 15;
    int store [15] = {0};
    int exit = -1;
    int cnt = 0;
    int i = 0;
    do {
        scanf ("%d %d", &store[i], &store[i+1]);
        cnt +=2;
        if (!store[i]) {
            exit++;
        }
        i +=2;
    } while (!exit);
    //
    {
        for (int o=0; o<cnt; o++) {
            printf ("%d\t", o);
        }
    printf ("\n");
        for (int o=0; o<cnt; o++) {
            printf ("%d\t", store[o]);
        }
        printf ("\n");
    }
    //
    
    // for (i=0; i<cnt; i+2) {
    //     if (b>0) {
    //         if (store[i+1]>1) {
    //             printf ("%d", store[i+1]);
    //         }
    //         if (store[i]>0) {
    //             printf ("x");
    //         }
    //         if (store[i]>1) {
    //            printf ("%d", store[i]); 
    //         }
    //     }
    // }
    

    return 0;  
} 
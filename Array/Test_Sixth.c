#include <stdio.h>
int serch( int key, int a[], int length);
int main (void) 
{
    //const int number = 20;
    int store [20] = {0};
    int exit=-1;
    int cnt=0;
    int i=0;
    int tmp=0;
    do {
        scanf ("%d %d", &store[i], &store[i+1]);
        cnt +=2;
        if (store[i]<1) {
            exit++;
        }
        i +=2;
    } while (exit<1);
    {
        for (int o=0; o<cnt; o++) {
            printf ("%d\t", o);
        }
    printf ("\n");
        for (int o=0; o<cnt; o++) {
            printf ("%d\t", store[o]);
        }
        printf ("\n\n");
    }
    for (i=0; i<cnt; i+=2) {
        if (store[i] != -1) {
            for (int t=i+2; t<cnt; t+=2) {
                if (store[t] == store[i]) {
                    store[i+1] += store[t+1];
                    store[t] = store[t+1] = -1;
                }
            }
        }
    }
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
    
    for (i=0; i<cnt; i+=2) {
        if (store[i+1]>0) {
            if (store[i]==0) {
                tmp=i;
            } else {
                if (store[i+1]>1) {
                    printf ("%d", store[i+1]);
                }
                    printf ("x");
                if (store[i]>1) {
                printf ("%d", store[i]); 
                }
            printf ("+");
            }
        }
    }
    if (tmp != 0) {
        printf ("%d", store[tmp+1]);
    }
    return 0;  
} 
//4x6+6x5+12x3+12x2+12x+40
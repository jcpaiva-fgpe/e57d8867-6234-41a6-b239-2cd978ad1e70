#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a;
    scanf("%d", &a);
    
    if (a >= 0)
        printf("POSITIVE\n");
    else
        printf("NEGATIVE\n");
    
    exit(0);
}

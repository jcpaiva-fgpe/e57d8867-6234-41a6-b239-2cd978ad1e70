#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N ;
    int factorial ;
    scanf("%d", &N) ;
    
    if ( N < 0 || N > 10)
        printf("ERROR\n") ;
    else
    {
        factorial = 1 ;

        while( N > 1 )
        {
            factorial = factorial * N ;
            N = N - 1 ;
            }
        printf("%d\n", factorial) ;
    }
    exit(0) ;
}

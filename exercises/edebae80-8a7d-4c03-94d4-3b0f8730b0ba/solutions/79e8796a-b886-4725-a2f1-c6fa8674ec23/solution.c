#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BASE 2

int main(void)
{
    int N ;
    int bit ;
    int w ;
    int dec ;
    
    w = 0 ;
    dec = 0 ;
    
    scanf("%d", &N) ;
    w = N - 1;
    
     while ( w >= 0 )
    {
        scanf("%d", &bit) ;
    
        if( bit >= 0 && bit < BASE)
        {
            dec = dec + bit*pow(BASE, w) ;
            w = w - 1 ;
        
        }
        else{
            printf("ERROR\n") ;
            exit(0);
        }
        
    }
    printf("%d\n", dec) ;
    exit(0) ;
}

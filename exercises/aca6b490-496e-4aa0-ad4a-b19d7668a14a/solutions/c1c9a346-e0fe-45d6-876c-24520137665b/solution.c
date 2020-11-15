#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num ;
    int riga, col ;
    int cifra ;
    scanf("%d",&num) ;
        
    if ( num <=0 )
        printf("ERROR\n") ;
    else
    {
        riga = 0 ;
        cifra = 1;
        while ( riga < num )
        {
            col = 0 ;
            while ( col <= riga )
            {
                printf("%d ", cifra) ;
                col = col + 1 ;
                cifra=cifra+1;
                
            }
            printf("\n") ;
            riga = riga + 1 ;
        }
    }
        exit(0) ;
    
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const int MAXDIM = 30 ;
    char A[MAXDIM + 1] ;
    char B[MAXDIM + 1] ;
    int len_A, len_B ;
    int contenuto ;
    int i,j;
    
    gets(A) ;
    
    len_A = strlen(A) ;
    
    gets(B) ;
    len_B = strlen(B) ;
    
    if ( len_A < len_B )
        printf("ERROR\n") ;
    else
    {
        for ( i=0; i+(len_B-1)<len_A; i++ ) {
            contenuto = 1 ;
            for ( j=0; j<len_B && contenuto==1; j++ ) {
            if ( A[i+j] != B[j] )
                contenuto = 0 ;
            }
            if ( contenuto==1 ) {
                for ( j=0; j<len_B; j++ )
                    A[i+j] = '*' ;
                
                i = i + len_B - 1 ;
            }
        }
        printf("%s\n", A) ;

    }
    exit(0) ;

}


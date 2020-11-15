#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    const int MAX = 1000;
    const int LUN = 100;
    char A[MAX][LUN+1] ;
    int N = 0;
    int ncar, nalfa, npar ;
    int end = 0;
    char row[300] ;
    int i,j ;

    do
    {
        gets(row) ;
    if ( strlen(row) > LUN )
        printf("ERROR\n") ;
    else if ( strcmp( row, "END" )==0 )
        end = 1 ;
    else
        {
            strcpy( A[N], row ) ;
            N++ ;
        }
        
    }
    while (end==0 && N<MAX) ;
    printf("%d\n", N) ;
    
    ncar = 0 ;
    for (i=0; i<N; i++)
        ncar = ncar + strlen( A[i] ) ;
    printf("%d\n", ncar) ;
    
    nalfa = 0 ;
    for (i=0; i<N; i++) {
        for (j=0; A[i][j]!=0; j++) {
            if ( isalnum( A[i][j] ) )
                nalfa++ ;
            }
    }
    
    printf("%d\n", nalfa) ;
    
    npar = 0;
    for (i=0; i<N; i++){
        for (j=0; A[i][j]!=0; j++) {
         
            if ( isalpha(A[i][j]) && ( (j==0) || !isalpha(A[i][j-1])) )
            {
                npar++ ;
            }
        }
    }
    printf("%d\n", npar) ;
    
    exit(0) ;

}


#include <stdio.h>
#include <stdlib.h>
int main(void)  {
    const int MAXN = 200 ;
    int N ;
    int vet[MAXN] ; int i ;

    do
    {
        scanf("%d",&N) ;
        if ( N > MAXN || N <=0 )
            printf("ERROR\n") ;
    }
    while ( N > MAXN || N <=0 ) ;
    for ( i=0; i<N; i++ )
    {
        scanf("%d", &vet[i]) ;
    }
    
    for ( i=0; i<N-1; i++ )
    vet[i] = vet[i+1] ;
    vet[N-1] = 0 ;
    
    for ( i=0; i<N; i++ )
        printf("%d ", vet[i]) ;
    printf("\n") ;
    for ( i=N-1; i>0; i-- )
    vet[i] = vet[i-1] ;
    vet[0] = 0 ;
    for ( i=0; i<N; i++ )
        printf("%d ", vet[i]) ;
    printf("\n") ;

    exit(0) ;
    
}

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main() {
	const int MAXDIM = 100 ;
	char A[MAXDIM + 1] ;
	char B[MAXDIM + 1] ;
	int len ;
	int i ;

	gets(A) ;

	len = strlen(A) ;

	for ( i=0; i<len; i++) {
		if ( A[i] == 'S' || A[i] == 's' ) 
			B[i] = '5';
		else if ( A[i] == 'A' || A[i] == 'a' ) 
			B[i] = '4';
		else if ( A[i] == 'O' || A[i] == 'o' )
			B[i] = '0';			
		else if ( A[i] == 'E' || A[i] == 'e' ) 
			B[i] = '3';
		else if ( A[i] == 'B' || A[i] == 'b' ) 
			B[i] = '8';
		else if ( A[i] == 'I' || A[i] == 'i' ) 
			B[i] = '1';
		else
	        B[i] = A[i] ;

	}
	B[len] = '\0' ;
	puts(B) ;

	exit(0) ;
    
}

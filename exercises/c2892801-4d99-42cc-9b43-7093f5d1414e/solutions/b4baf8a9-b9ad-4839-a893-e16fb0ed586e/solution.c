#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	const int MAXDIM = 100 ;
	char A[MAXDIM +1] ;
	char B[MAXDIM +1] ;
	int len ; 
	int i ;

	gets(A) ;
	len = strlen(A) ;
	for ( i=0; i<len; i++ ){
		if ( (i==0) || isspace(A[i-1]) )
			B[i] = toupper(A[i]) ;
		else
			B[i] = tolower(A[i]) ;
	}
	B[len] = '\0' ;
	puts(B) ;
	exit(0);
}


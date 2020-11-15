int starter(char a[], char b[]){
    int n ;
    n=0;
    while ( a[n] != 0 && b[n] != 0 && a[n]==b[n] )
        n++ ;
    return n ;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

{{code}}

int main(void) {
   char a[100], b[100];
    int n = 0;
    
    scanf("%s",a);
    scanf("%s",b);
    n = starter(a,b);
    printf("%d\n",n);
    exit(0);
}

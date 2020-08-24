#include <stdio.h>

int countset(int n){
    int cnt=0;
    while(n>0)
    {
        n=(n&(n-1));
        cnt++;
    }
    return cnt;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,c=0,i,sum=0;
	    scanf("%d",&n);
	    int k=n;
	    for(i=1;i<=n;i++)
	    {
	        sum=i+countset(i);;
	        if(sum==k)
	        {
	            c=1;
	            break;
	        }
	    }
	    if(c==0)
	    printf("1\n");
	    else
	    printf("0\n");
	}
	return 0;
}

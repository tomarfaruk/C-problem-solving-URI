//omar faruk
#include<stdio.h>
int main()
{	unsigned long long n;
	while(scanf("%llu",&n)){
		if(n==-1)
		break;
		if(n==0)
		printf("%d\n",0);
		else printf("%llu\n",n-1);
	}
	return 0;
}

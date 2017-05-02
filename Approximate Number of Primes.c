#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	long long int chCount=0, i, j, k, n, t;
	
	scanf("%lld",&n);
	double d=n/log(n);
	printf("%.1f %.1f\n",d,d*1.25506);
	
	return 0;
}


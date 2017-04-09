//omar faruk
#include<stdio.h>
int main(){
	int a,b;
	while((scanf("%d%d",&a,&b)) != EOF ){
		
		long long fs=1, sc = 1;
		
		while(a > 0){
			fs *= a--;
		}
		while( b > 0){
			sc *= b--;
		}
		
	 	printf("%lld\n", fs+sc);
	 	
	}
	return 0;
}

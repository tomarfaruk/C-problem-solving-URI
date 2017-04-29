///omarfaruk
#include<stdio.h>
int main(){
	int i,j,k,l,n,m,c=1,arr[110];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1; i<n; i++){
		scanf("%d",&m);
		if(k>m){
			c=i+1;
			k=m;
		}
	}
	printf("%d\n",c);
	
	return 0;
}

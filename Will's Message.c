//omar faruk
#include<stdio.h>
int main(){
	char name[3000];
	int n;
	while((scanf("%s",name)) != EOF){
		scanf("%d",&n);
		int arr[n], i,j,k,l;
		for(i=0; i<n; i++)
			scanf("%d",&arr[i]);
		for(i=0; i<n; i++){
			printf("%c",name[arr[i]-1]);
		}
		printf("\n");
	}
	return 0;
}

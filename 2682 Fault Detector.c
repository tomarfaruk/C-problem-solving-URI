//omar faruk
#include<stdio.h>
int main(){
	int a, num[10005], i = 0, j, temp = 0, max = 0;
	while( (scanf("%d",&num[i])) != EOF ){
		i++;
	}
	max = num[0];
	for( j = 0; j < i; j++ ){
		if(num[j] < num[j+1]){
			max = num[j+1];
		}
		else break;
	}
	printf("%d\n",max+1);
	
	return 0;
}

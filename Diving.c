#include<stdio.h>
int main(){
	int i,j,k,l,n,m;
	float total=0, a,b,c,d,e,f,g,h,min,max;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		char name[10000];
		min=10.0, max = 0, total = 0;
		scanf("%s%f", name,&c);
		for(j=0; j<7; j++){
			scanf("%f",&a);
			if(a<min)
				min = a;
			if(a>max)
				max = a;	
			total += a;
		}
		printf("%s %.2f\n",name,(total-(max+min))*c);
	}
	return 0;	
}


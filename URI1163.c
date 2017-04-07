#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d, g = 9.80665, pi = 3.14159;
	float h;
	
	while(( scanf("%f", &h)) != EOF ){
		
		scanf("%d%d%d", &b, &c, &d);
		
		while(d>0){
			
			double angle = 0, speed = 0, r=0;
			scanf("%lf%lf", &angle, &speed);
			
			angle = 2*angle * pi/180;
			angle = sin(angle);
			printf("%f\n",angle);
			speed *= speed;
			
			r = (speed*angle) / g;
			
			if(r >= b && r <= c) printf("%.5f -> DUCK\n",r);
			else printf("%.5f -> NUCK\n",r);
			
			d--;
		}
		
	}
	return 0;
}


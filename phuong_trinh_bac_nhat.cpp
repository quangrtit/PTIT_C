#include<stdio.h>
int main(){
	long long a,b;scanf("%lld %lld", &a, &b);
	if(a == 0){
		if(b == 0){
			printf("Vo so nghiem");
		}
		else{
			printf("Vo nghiem");
		}
	}
	else{
		float c = -b*(1.0)/a;
		printf("%.2f", c);
	}
}

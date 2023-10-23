#include<stdio.h>
int main(){
	int a,b;scanf("%d %d", &a, &b);
	if(b == 0){
		printf("%d", 0);
	}
	else{
		float c = a*1.0/b; 
		printf("%d %d %d %.2f %d", a+b, a-b, a*b, c, a%b);
	}
}

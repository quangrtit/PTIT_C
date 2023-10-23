#include<stdio.h>
int main(){
	int a,b;scanf("%d %d", &a, &b);
	if(a > b){
		long long tmp = (a-b+1) * (a+b)/2;
		printf("%lld", tmp);
	}
	else{
		
		long long tmp = (b-a+1) * (a+b)/2;
		printf("%lld", tmp);
	}
}

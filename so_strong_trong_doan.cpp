#include<stdio.h>
int giaithua(int x){
	if(x == 0){
		return 1;
	}
	else if(x == 1){
		return 1;
	}
	else{
		int cn = 1;
		for(int i =2;i<=x;i++){
			cn *= i;
		}
		return cn;
	}
}
int tt(int n){
	int cn = 0;
	int n1 = n;
	while(n > 0){
		cn += giaithua(n%10);
		n = n / 10;
	}
	if(cn == n1){
		return 1;
	}
	else{
		return 0;
	}
}
int max(int a,int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int a,b;scanf("%d %d",&a,&b);
	for(int i = (a+b-max(a,b));i<=max(a,b);i++){
		if(tt(i) == 1){
			printf("%d",i);
			printf(" ");
		}
	}
}

#include<stdio.h>
#include<math.h>
int tcn1(int n){
	if(n < 10){
		return n;
	}
	else{
		int tcn = 0;
		while(n > 0){
			tcn += n%10;
			n = n / 10;
		}
		return tcn;
	}
}
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int fibo(int n){
	if(n == 1 || n == 2 || n == 3){
		return 1;
	}
	else{
		int f1 = 0,f2 = 1,tmp,cn = 0;
		while(1 > 0){
			tmp = f1 + f2;
			f1 = f2;
			f2 = tmp;
			if(tmp == n){
				return 1;
			}
			else if(tmp > n){
				return 0;
			}
		}
	}
}
int check(int n){
	if(nt(n) == 1  &&  fibo(tcn1(n)) == 1 ){
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
	for(int i = a+b-max(a,b) ; i <= max(a,b);i++){
		if(check(i) == 1){
			printf("%d",i);
			printf(" ");
		}
	}
}

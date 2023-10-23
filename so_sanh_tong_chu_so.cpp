#include<stdio.h>
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
int main(){
	int a,b;scanf("%d %d",&a,&b);
	if(tcn1(a) <= tcn1(b)){
		printf("%d %d",a,b);
	}
	else{
		printf("%d %d",b,a);
	}
}

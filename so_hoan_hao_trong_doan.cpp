#include<stdio.h>
#include<math.h>
int tonguoc(int n){
	int cn = 0;
	for(int i = 1;i<=sqrt(n);i++){
		if(n%i == 0){
			cn += (i + n/i);
		}
	}
	if(sqrt(n) == (int)sqrt(n)){
		cn -= sqrt(n);
	}	
	return cn;
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
	for(int i = (a+b-max(a,b));i <= max(a,b);i++){
		if(tonguoc(i) == i*2){
			printf("%d",i);
			printf(" ");
		}
	}
}

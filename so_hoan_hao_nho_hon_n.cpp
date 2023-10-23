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
int main(){
	int n;scanf("%d",&n);
	for(int i = 2;i < n;i++){
		if(tonguoc(i) == i*2){
			printf("%d",i);
			printf(" ");
		}
	}
}

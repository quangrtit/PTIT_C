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
void solve(){
	int n;scanf("%d",&n);
	for(int i  = 1;i<n;i++){
		if(tt(i) == 1){
			printf("%d",i);
			printf(" ");
		}
	}
}
int main(){
	solve();
}

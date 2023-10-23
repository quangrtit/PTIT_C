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
void solve(){
	int n;scanf("%d",&n);
	int n1 = n;
	long long sum = 0;
	while(n>0){
		sum += giaithua(n%10);
		n = n / 10;
	}
	if(sum == n1){
		printf("1");
	}
	else{
		printf("0");
	}
}
int main(){
	solve();
}

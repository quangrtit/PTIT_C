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
void solve(){
	int n;scanf("%d",&n);
	if(n*2 == tonguoc(n)){
		printf("1");
	}
	else{
		printf("0");
	}
}
int main(){
	solve();
}

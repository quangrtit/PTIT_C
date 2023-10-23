#include<stdio.h>
#include<string.h>

int max(int a,int b){
	if(a >= b ){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	char a[55];
	scanf("%s",a);
	int dp[55];
	for(int i = 0 ; i < 55; i ++){
		dp[i] = 1;
	}
	int cnt = 1;
	for(int i = 0; i < strlen(a);i++){
		dp[i] = 1;
		for(int j = 0;j<i;j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i],dp[j] + 1);
			}
		}
		cnt = max(cnt,dp[i]);
	}
	printf("%d",26-cnt);
}

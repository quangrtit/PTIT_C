#include<stdio.h>
#include<string.h>
int check(char s[501]){
	int cn = 0;
	if(strlen(s) == 1){
		return 1;
	}
	for(int i = 0;i<strlen(s)/2;i++){
		if(s[i] != s[strlen(s)-1-i]){
			return 0;
		}
	}
	return 1;
		
}
int a[10];
void nt(){
	for(int i = 0;i<=9;i++){
		a[i] = 0;
	}
	a[2] = 1,a[3] = 1,a[5] = 1,a[7] = 1;
}
int check2(char s[501]){
	for(int i = 0;i<strlen(s);i++){
		if(a[s[i] - '0'] == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	nt();
	while(t--){
		char s[501];
		scanf("%s",s);
		if(check(s) == 1 && check2(s) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	
}

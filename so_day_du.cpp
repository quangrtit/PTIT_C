#include<stdio.h>
#include<string.h>
int check(int a[]){
	for(int i = 0;i<=9;i++){
		if(a[i] == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char a[1001];
		scanf("%s",a);
		int dd[10];
		for(int i = 0;i<=9;i++){
			dd[i] = 0;
		}
		int cnt = 0;
		for(int i = 0;i<strlen(a);i++){
			if(0 <= a[i]-'0' && a[i]-'0' <=9){
				dd[a[i]-'0'] ++;
				cnt ++;
			}
		}
		if(cnt != strlen(a) || a[0] == '0'){
			printf("INVALID\n");
		}
		else{
			if(check(dd) == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}

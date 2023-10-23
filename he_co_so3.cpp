#include<stdio.h>
#include<string.h>
int check(char a[20]){
	for(int i = 0;i<strlen(a);i++){
		if(a[i] != '0' && a[i] != '1' && a[i] != '2'){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char a[20];
		scanf("%s",a);
		if(check(a) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

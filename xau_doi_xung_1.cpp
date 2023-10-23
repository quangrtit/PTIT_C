#include<stdio.h>
#include<string.h>
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char a[100];
		scanf("%s",a);
		if(strlen(a) == 1){
			printf("YES\n");
		}
		else{

			int cnt = 0;
			for(int i = 0; i <strlen(a)/2;i++){
				if(a[i] != a[strlen(a)-1-i]){
					cnt++;
				}
			}
			if(cnt == 1){
				printf("YES\n");
			}
			else if(cnt == 0){
				int ok = strlen(a);
				if(ok %2 == 1){
					printf("YES\n");
				}
				else{
					printf("NO\n");
				}
			}
			else{
				printf("NO\n");
			}
		}
	}
}

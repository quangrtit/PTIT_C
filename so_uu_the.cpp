#include<stdio.h>
#include<string.h>
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char a[1001];
		scanf("%s",a);
		int odd = 0;
		int check =  0;
		for(int i = 0;i<strlen(a);i++){
			if((a[i] - '0') % 2 == 1){
				odd ++;
			}
			if((a[i] - '0') < 0 || (a[i] - '0') > 9){
				check = 1;
			}
		}
		int chan = strlen(a) - odd;
		int size =  strlen(a);
		if(check == 0){
			if(size %2 == 0){
				if(odd < chan){
					printf("YES\n");
				}
				else{
					printf("NO\n");
				}
			}
			else{
				if(odd > chan){
					printf("YES\n");
				}
				else{
					printf("NO\n");
				}
			}
		}
		else{
			printf("INVALID\n");
		}
	}
}

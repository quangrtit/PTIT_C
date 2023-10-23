#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		
		char a[200];
		gets(a);
		int cn = 0;
		for(int i = 0;i<strlen(a)-1;i++){
			if(a[i] == ' ' && a[i+1] != ' '){
				cn ++;
			}
		}
		printf("%d\n",cn +1 );
	}
}

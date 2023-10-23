#include<stdio.h>
#include<string.h>
char thuong(char s){
	if(65 <= s && s>=90){
		return (char)(s+32);
	}
	else{
		return (char)s;
	}
}
char hoa(char s){
	if(97 <= s && s <= 122){
		return (char)(s-32);
	}
	else{
		return (char)s;
	}
}
struct ht{
	char b[100];
};
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char x[100];gets(x);
		int size = strlen(x);
		int ii = 0;
		struct ht ok_o[100];
		char *token = strtok(x, " ");
		while(token != NULL){
			strcpy(ok_o[ii].b,token);
			if(ok_o[ii].b[0] >= 97 && ok_o[ii].b[0] <= 122){
				ok_o[ii].b[0] = ok_o[ii].b[0] - 32;
			}
			for(int i = 1 ; i < strlen(token);i++){
				if(ok_o[ii].b[i] >= 65 && ok_o[ii].b[i] <= 90){
					ok_o[ii].b[i] = ok_o[ii].b[i] + 32;
				}
			}
			token = strtok(NULL," ");
			ii ++;
		}
		for(int i = 0 ;i<ii;i++){
			if(i == ii-1){
				printf("%s",ok_o[ii-1].b);
			}
			else{
				printf("%s ",ok_o[i].b);
			}
		}		
		printf("\n");
	}
}

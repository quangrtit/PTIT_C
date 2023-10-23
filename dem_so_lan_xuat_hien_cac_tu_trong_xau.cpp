#include<stdio.h>
#include<string.h>
char chuanhoa(char s){
	if(s >= 65 && s <= 90){
		return (char)(s+32);
	}
	return s;
}
struct nhom{
	char x[100];
};
int main(){
	char s[10000];gets(s);
	char *token = strtok(s," ");
	struct nhom ok[1000];
	int ii = 0;
	while(token != NULL){
		for(int i = 0;i<strlen(token);i++){
			token[i] = chuanhoa(token[i]);
		}
		strcpy(ok[ii].x,token); 
		ii++;
		token = strtok(NULL," ");
	}
	int dd[ii];
	for(int i = 0;i<ii;i++){
		dd[i] = 0;
	}
	for(int i  = 0;i<ii;i++){
		if(dd[i] == 0){
			int cnt = 0;
			for(int j = 0;j < ii;j++){
				int kt = 0;
				if(strlen(ok[i].x) == strlen(ok[j].x) && ok[i].x[0] == ok[j].x[0]){
					for(int i1 = 0;i1<strlen(ok[i].x);i1++){
						if(ok[i].x[i1] != ok[j].x[i1]){
							kt = 1;
							break;
						}
					}
					if(kt == 0){
						cnt ++;
						dd[j] = 1;
					}
				}
			}
			printf("%s %d\n",ok[i].x,cnt);
			dd[i] = 1;
		}
	}
}


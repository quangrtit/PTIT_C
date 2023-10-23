#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 
struct dathuc{
	int heso,somu;
	char x[10+1];
	int oh;
};
int max(int a,int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		struct dathuc ok[1000+1];
		char a[1000+1],b[1000+1];
		gets(a);
		gets(b);
		int ii = 0;
		char *token = strtok(a," ");
		while(token != NULL){
			if(strcmp(token,"+") != 0){
				strcpy(ok[ii].x,token);
				int vt;
				for(int i = 0 ; i < strlen(token)-1;i++){
					if(token[i+1] == '*'){
						vt = i;
						break;
					}
				}
				ok[ii].heso = 0;
				ok[ii].somu = 0;
				ok[ii].oh = 0;
				for(int i = 0 ; i <= vt;i++){
					ok[ii].heso = ok[ii].heso *10 + (token[i] - '0');	
				}
				for(int i = vt + 4;i < strlen(token) ; i ++){
					ok[ii].somu  = ok[ii].somu *10 + (token[i] - '0');
				}
				ii ++;
			}
			token = strtok(NULL," ");	
		}
		struct dathuc ok1[1000+1];
		int ii1 = 0;
		char *token1 = strtok(b," ");
		while(token1 != NULL){
			if(strcmp(token1,"+") != 0){
				strcpy(ok1[ii1].x,token1);
				int vt;
				for(int i = 0 ; i < strlen(token1)-1;i++){
					if(token1[i+1] == '*'){
						vt = i;
						break;
					}
				}
				ok1[ii1].heso = 0;
				ok1[ii1].somu = 0;
				ok1[ii1].oh = 0;
				for(int i = 0 ; i <= vt;i++){
					ok1[ii1].heso = ok1[ii1].heso *10 + (token1[i] - '0');	
				}
				for(int i = vt + 4;i < strlen(token1) ; i ++){
					ok1[ii1].somu  = ok1[ii1].somu *10 + (token1[i] - '0');
				}
				ii1 ++;
			}
			token1 = strtok(NULL," ");	
		}
		struct dathuc ok2[1000+1];
		int iii1 = 0;
		int iii = 0;
		int jjj = 0;
		while(iii < ii && jjj < ii1){
			if(ok[iii].somu > ok1[jjj].somu){
				ok2[iii1].heso= ok[iii].heso;
				ok2[iii1].somu = ok[iii].somu;
				iii1++;
				iii++;
			}
			else if(ok[iii].somu < ok1[jjj].somu){
			//	printf("%d*x^%d +",ok1[jjj].heso,ok1[jjj].somu);
				ok2[iii1].heso = ok1[jjj].heso;
				ok2[iii1].somu = ok1[jjj].somu;
				jjj++;
				iii1++;
			}
			else{
			//	printf("%d*x^%d +",ok[iii].heso + ok1[jjj].heso,ok[iii].somu);
				ok2[iii1].heso = ok[iii].heso + ok1[jjj].heso;
				ok2[iii1].somu = ok[iii].somu;
				iii1++;
				iii ++;
				jjj ++;
			}
		}
		for(int i = 0 ; i < iii1;i ++){
			if(i == iii1-1){
				printf("%d*x^%d",ok2[i].heso,ok2[i].somu);
			}
			else{
				printf("%d*x^%d + ",ok2[i].heso,ok2[i].somu);
			}
		}
		printf("\n");
	}
}

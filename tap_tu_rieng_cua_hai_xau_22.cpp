#include<stdio.h>
#include<string.h>
struct name{
	char x[201];
};
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){	
		char s1[201],s2[201];
		gets(s1),gets(s2);
		struct name s11[201];
		struct name s22[201];
		char *token1 = strtok(s1," ");
		int ii1 = 0;
		while(token1 != NULL){
			strcpy(s11[ii1].x,token1);
			ii1 ++;
			token1  = strtok(NULL," ");
		}
		char *token2 = strtok(s2," ");
		int ii2 = 0;
		while(token2 != NULL){
			strcpy(s22[ii2].x,token2);
			ii2 ++;
			token2  = strtok(NULL," ");
		}
		struct name ok[201];
		int jj = 0;
		for(int i = 0;i<ii1;i++){
			int chec = 0;
			if(s11[i].x[0] != '1'){
				for(int j = 0;j<ii2;j++){
					if(strcmp(s11[i].x,s22[j].x) == 0){
						chec = 1;
						break;
					}
				}
				if(chec == 0){
					strcpy(ok[jj].x,s11[i].x);
					jj ++;
					for(int i1 = i+1;i1 < ii1;i1++){
						if(strcmp(s11[i1].x,s11[i].x) == 0){
							s11[i1].x[0] = '1';
						}
					}
				}
			}
		}
		struct name ok2[201];
		int ee = 0;
		for(int i = 0;i < jj;i++){
			if(ok[i].x[0] != '1'){
				strcpy(ok2[ee].x,ok[i].x);
				ee++;
			}
		}
		for(int i = 0;i<ee-1;i++){
			for(int j = i+1;j<ee;j++){
				if(strcmp(ok2[i].x,ok2[j].x) > 0){
					char xx[101];
					strcpy(xx,ok2[i].x);
					strcpy(ok2[i].x,ok2[j].x);
					strcpy(ok2[j].x,xx);
				}
			}
		}
		for(int i = 0;i<ee;i++){
			printf("%s ",ok2[i].x);
		}
		printf("\n");
	}
}

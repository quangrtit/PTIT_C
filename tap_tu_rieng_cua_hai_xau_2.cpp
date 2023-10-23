#include<stdio.h>
#include<string.h>
struct ch{
	char x[201];
};
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char a[201],b[201];
		gets(a);gets(b);
		int n = strlen(a);
		char *token = strtok(a," ");
		int ii = 0,jj = 0;
		struct ch kt_a[100];
		struct ch kt_b[100];
		while(token != NULL){
			for(int i = 0;i<strlen(token);i++){
				kt_a[ii].x[i] = token[i];
			}
			ii ++;
			token = strtok(NULL," ");
		}
		char *token1 = strtok(b," ");
		while(token1 != NULL){
			for(int i = 0;i<strlen(token1);i++){
				kt_b[jj].x[i] = token1[i];
			}
			jj ++;
			token1 = strtok(NULL," ");
		}
		struct ch kt_c[100];
		int dd[81];
		for(int i = 0;i <= 80;i++){
			dd[i] = 0;
		}
		int iii = 0;
		for(int i = 0;i<ii;i++){
			int check = 0;
			for(int j = 0;j<jj;j++){
				if(kt_a[i].x == kt_b[j].x){// ss
					check = 1;
					break;
				}
			}
			if(check == 0 && dd[i] == 0){
				for(int i = 0;i<ii;i++){
					if(kt_a[i].x)
				}
				for(int i1 = 0;i1<strlen(kt_a[i].x);i1++){
					kt_c[iii].x[i1] = kt_a[i].x[i1];
				}
				iii ++;
			}
		}
	}
}

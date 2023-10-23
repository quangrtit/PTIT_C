#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct xau{
	char x[105];
	int tt;
};
int cmp(char a[105],char b[105]){
	char c[105],d[105];
	strcpy(c,a);
	strcpy(d,b);
	a =  strcat(c,d);
	b =  strcat(d,c);
	if(strcmp(a,b) < 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		int m;scanf("%d",&m);
		struct xau a[105];
		for(int i = 0 ; i < m ; i ++){
			scanf("%s",a[i].x);
		}
		for(int i = 0 ; i < m-1 ; i ++){
			for(int j = i+1;j < m ; j ++){
				if(cmp(a[i].x,a[j].x) == 0){
					char ok[105];
					strcpy(ok,a[i].x);
					strcpy(a[i].x,a[j].x);
					strcpy(a[j].x,ok);
				}
			}
		}
		for(int i = 0 ; i < m ; i++){
			printf("%s",a[i].x);
		}
		printf("\n");
	}
}

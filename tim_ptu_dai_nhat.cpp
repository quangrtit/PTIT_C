#include<stdio.h>
#include<string.h>
#include<math.h>

struct xau{
	char a[105];
	int sl;
};
int main(){
	struct xau ok1[1000];
	char s[105];
	int len = -1,ii = 0;
	while(scanf("%s",s) != -1){
		int tmp = strlen(s);
		if(len < tmp){
			len = tmp;
		}
		strcpy(ok1[ii].a,s);
		ok1[ii].sl = 1;
		ii ++;
	}
	for(int i  = 0 ; i < ii-1 ; i ++){
		if(ok1[i].sl != -1){
			for(int j = i+1 ; j < ii ; j ++){
				if(strcmp(ok1[i].a,ok1[j].a) == 0){
					ok1[j].sl = -1;
					ok1[i].sl ++;
				}
			}
		}
	}
	for(int i = 0 ; i < ii ; i ++){
		if(ok1[i].sl != -1 && strlen(ok1[i].a) == len){
			printf("%s %d %d\n",ok1[i].a,len,ok1[i].sl);
		}
	}
	
}

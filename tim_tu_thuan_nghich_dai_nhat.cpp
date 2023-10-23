#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

struct xau{
	char kt[105];
	int sl;
};
int check(char s[105]){
	int size = strlen(s);
	for(int i = 0 ; i < size/2 ; i ++){
		if(s[i] != s[size - i - 1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s[105];
	int ii = 0;
	struct xau a[10005];
	while(scanf("%s",s) != EOF){
		if(check(s) == 1){
			strcpy(a[ii].kt,s);
			a[ii].sl = 1;
			ii++;
		}
	
	}
	for(int i = 0 ; i < ii - 1; i ++){
		if(a[i].sl != -1){
			for(int j = i+1; j < ii ; j ++){
				if(strcmp(a[i].kt,a[j].kt) == 0){
					a[j].sl = -1;
					a[i].sl ++;
				}
			}
		}
	}
	int max = -1;
	for(int i = 0 ; i < ii;i++){
		if(a[i].sl != -1){
			int size = strlen(a[i].kt);
			if(size > max){
				max = size;
			}
		}
	}
	for(int i = 0 ; i < ii ; i ++){
		int size1 = strlen(a[i].kt);
		if(size1 == max && a[i].sl != -1){
			printf("%s %d\n",a[i].kt,a[i].sl);
		}
	}
}

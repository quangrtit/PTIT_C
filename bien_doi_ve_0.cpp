#include<stdio.h>
#include<string.h>
#include<math.h>
int h,c;
int check(int a[105][105],int n){
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0; j < n ; j ++){
			if(a[i][j] == 1) return 0;
		}
	}
	return 1;
}
void tk(int a[105][105],int n){
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(a[i][j] == 1){
				h = i;
				c =j;
			}
		}
	}
}
void xaydung(int a[105][105],int h,int c){
	for(int i = 0 ; i <= h ; i ++){
		for(int j = 0 ; j <= c ; j ++){
			if(a[i][j] == 1) a[i][j] = 0;
			else a[i][j] = 1;
		}
	}
}
int main(){
	int n;scanf("%d",&n);
	char s[105];
	getchar();
	int a[105][105];
	int ii = 0;
	while(n--){
		scanf("%s",s);
		for(int i = 0 ; i < strlen(s) ; i ++){
			a[ii][i] = s[i] - '0';
		}
		ii ++;
	}
	int cnt = 0;
//	for(int i = 0 ; i < ii ; i ++){
//		for(int j = 0 ; j < ii ; j ++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	while(check(a,ii) != 1){
		tk(a,ii);
		xaydung(a,h,c);
//		printf("%d %d\n ",h,c);
		cnt ++;
	}
	printf("%d",cnt);
}

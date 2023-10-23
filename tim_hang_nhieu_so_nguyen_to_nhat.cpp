#include<stdio.h>
#include<math.h>
int aa[1001];
void sang(){
	aa[0] = 1;
	aa[1] = 1;
	for(int i = 2;i< 1001;i++){
		aa[i] = 0;
	}
	for(int i  =2;i<=sqrt(1000);i++){
		if(aa[i] == 0){
			for(int j = i*2;j<=1000;j+=i){
				aa[j] = 1;
			}
		}
	}
}
int main(){
	sang();
	int n;scanf("%d",&n);
	int a[n][n];	
	int check_max = -1;
	int ok = 0;
	for(int i = 0;i<n;i++){
		int demo = 0;
		for(int j = 0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(aa[a[i][j]] == 0){
				demo ++;
			}
		}
		if(check_max < demo){
			ok = i;
			check_max = demo;
		}
	}
	printf("%d\n",ok+1);
	for(int i = 0;i<n;i++){
		if(aa[a[ok][i]]== 0){
			printf("%d ",a[ok][i]);
		}
	}
	
}

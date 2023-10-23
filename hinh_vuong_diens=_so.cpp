#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int n1 = n;
	int a[2*n-1][2*n-1];
	int check = 0;
	int kf_l = 2*n-2;
	int kf_r = 0;
	while(kf_r <= kf_l){
		for(int i = kf_r;i<=kf_l;i++){
			a[i][kf_r] = n;
			a[kf_r][i] = n;
			a[kf_l][i] = n;
			a[i][kf_l] = n;
		}
		kf_r ++;
		kf_l --;
		n --;
	}
	for(int i = 0;i<2*n1-1;i++){
		for(int j = 0; j < 2*n1-1;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

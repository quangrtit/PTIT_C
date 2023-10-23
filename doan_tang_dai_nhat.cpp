#include<stdio.h>
struct dc{
	int lt[100];
};
int max(int a , int b){
	if(a >= b ){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int t;scanf("%d",&t);
	int tt = 1;
	while(t--){
		struct dc x[100];
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int cnt = 0;
		for(int i = 0;i<n;i++){
			int res = 0,jj = i,tmp = -10001;
			while(jj < n){
				if(tmp < a[jj]){
					tmp = a[jj];
					res++;
					jj++;	
				}
				else{
					break;
				}
			}
			cnt = max(cnt,res);
		}
		printf("Test %d:\n",tt);
		printf("%d\n",cnt);
		for(int i = 0;i<n;i++){
			int res = 0,jj = i,tmp = -10001;
			while(jj < n){
				if(tmp < a[jj]){
					tmp = a[jj];
					res++;
					jj++;	
				}
				else{
					break;
				}
			}
			if(res == cnt){
				for(int j = i;j<i+res;j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
		tt ++;
		
	}
	
}

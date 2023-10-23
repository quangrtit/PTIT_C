#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n+1];
		a[n] = -1;
		int b[n],c[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ii = 0;
		for(int i = 0;i<n;i++){
			if(a[i] != -1){
				int cnt = 1;
				for(int j = i+1;j<n+1;j++){
					if(a[i] == a[j]){
						cnt ++;
					}
				}
				a[ii] = a[i];
				b[ii] = cnt;
				ii ++;
			}
		}
		int check = -100000;
		for(int i = 0;i<ii;i++){
			if(check < b[i]){
				check = b[i];
			}
		}
		for(int i = 0;i<ii;i++){
			if(check == b[i]){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}

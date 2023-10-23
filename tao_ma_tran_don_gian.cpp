#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	int ok = 0;
	int jj = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(j <= ok){
				printf("%d ",0);
			}
			else{
				printf("%d ",jj+1);
				jj ++;
			}
			
		}
		printf("\n");
		ok ++;
		jj = 0;
	}
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,m;scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
//		for(int i = 0 ; i < n;i++){
//			for(int j = 0 ; j < m ; j ++){
//				printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}																		
		int ii1 = 0,ii2 = n-1,jj1 = 0,jj2 = m-1;
		while(ii1 <= ii2 && ii1 <= jj2){
			for(int i = jj1 ; i < jj2 ; i++){
				printf("%d ",a[ii1][i]);
			}
			for(int i = ii1; i < ii2;i++){
				printf("%d ",a[i][jj2]);
			}
			for(int i = jj2;i > jj1;i--){
				printf("%d ",a[ii2][i]);
			}
			for(int i = ii2;i> ii1;i--){
				printf("%d ",a[i][jj1]);
			}
			ii1 ++;
			jj1 ++;
			ii2--;
			jj2--;
			if(ii1 == ii2 && jj1 != jj2){
				for(int i = jj1 ; i <= jj2;i++){
					printf("%d ",a[ii1][i]);
				}
				break;
			}
			else if(ii1 != ii2 && jj1 == jj2){
				for(int j = ii1;j <= ii2;j++){
					printf("%d ",a[j][jj1]);
				}
				break;
			}
			else if(ii1 == ii2 && jj1 == jj2){
				printf("%d ",a[ii1][jj1]);
				break;
			}
		}
		printf("\n");
	}
}

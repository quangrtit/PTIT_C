#include<stdio.h>
int kt(int a[] ,int m,int n){
	for(int i = 0;i<m;i++){
		if(a[i] == n){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int a[n],b[m];
	int check_a[1000+1];
	int check_b[1000+1];
	int check[1001];
	for(int i = 0;i<1001;i++){
		check_a[i] = 0;
		check_b[i] = 0;
		check[i] = 0;
	}
	int A[n];
	int B[m];
	int ii = 0,jj = 0;
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		check_a[a[i]] ++;
		if(check_a[a[i]] == 1){
			A[ii] = a[i];
			check[A[ii]] ++;
			ii ++;
		}
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&b[i]);
		check_b[b[i]] ++;
		if(check_b[b[i]] == 1){
			B[jj] = b[i];
			check[B[jj]] ++;
			jj ++;
		}
	}
//	for(int i = 0;i<ii;i++){
//		printf("%d ",A[i]);
//	}
//	printf("\n");
//	for(int i = 0;i<jj;i++){
//		printf("%d ",B[i]);
//	}
//	printf("\n");
//	printf("%d %d",ii,jj);

	int iii = 0,jjj = 0;
	int m1[101],m2[101],m3[101],i_m1 = 0,i_m2 = 0,i_m3 = 0;
	for(int i = 0;i < 1001;i++){
		if(check[i] == 2){
			m1[i_m1] = i;
			i_m1++;
		}
		else if(check[i] == 1){
			if(kt(A,ii,i) == 1){
				m2[i_m2] = i;
				i_m2 ++;
			}
			else{
				m3[i_m3] = i;
				i_m3 ++;
			}
		}
	}
//	while(iii < ii){
//		while(jjj < jj){
//			if(A[iii] == B[jjj]){
//				m1[i_m1] = A[iii];
//				printf("%d\n",m1[i_m1]);
//				i_m1 ++;
//			}
//			else if(A[iii] != B[jjj]){
//				if(check[A[iii]] == 1){
//					m2[i_m2] = A[iii];
//					printf("%d\n",m2[i_m2]);
//					check[A[iii]] = 3;
//					i_m2 ++;
//				}
//				if(check[B[jjj]] == 1){
//					m3[i_m3] = B[jjj];
//					printf("%d\n",m3[i_m3]);
//					check[B[jjj]] = 3;
//					i_m3 ++;
//				}
//			}
//			jjj ++;
//		}
//		iii ++;
//	}
	for(int i = 0;i<i_m1;i++){
		printf("%d ",m1[i]);
	}
	printf("\n");
	for(int i = 0;i<i_m2;i++){
		printf("%d ",m2[i]);
	}
	printf("\n");
	for(int i = 0;i<i_m3;i++){
		printf("%d ",m3[i]);
	}
	printf("\n");
}

#include<stdio.h>
int kq(int m,int n,int p,int a[][1000],int b[][1000],int x,int y){//nhan hang x cua ma tran a voi cot y cua ma tran b
	int ktq = 0;
	for(int i = 0;i<n;i++){
		ktq += a[x][i] * b[i][y];
	}
	return ktq;
}
int main(){
	int m,n,p,q;scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[m][1000],b[n][1000],c[p][1000];
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i = 0;i<p;i++){
		for(int j = 0;j<q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	int tg[m][1000];
	for(int i = 0;i<m;i++){
		for(int j = 0;j <p;j++){
			tg[i][j] = kq(m,n,p,a,b,i,j);
		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<q;j++){
			printf("%d ",kq(m,p,q,tg,c,i,j));
		}
		printf("\n");
	}
}

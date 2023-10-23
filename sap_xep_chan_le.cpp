#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	int ii = 0,jj = 0,b[n],c[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i] %2 == 0){
			b[ii] = a[i];
			ii ++;
		}
		else{
			c[jj] = a[i];
			jj ++;
		}
	}
	for(int i = 0;i<ii-1;i++){
		for(int j = i + 1;j<ii;j++){
			if(b[i] > b[j]){
				swap(&b[i] , &b[j]);
			}
		}
	}
	for(int i = 0;i<jj-1;i++){
		for(int j = i + 1;j<jj;j++){
			if(c[i] > c[j]){
				swap(&c[i] , &c[j]);
			}
		}
	}
	int tt1 = 0;
	while(tt1 < ii){
		printf("%d ",b[tt1]);
		tt1 ++;
	}
	int tt2 = 0;
	while(tt2 < jj){
		printf("%d ",c[tt2]);
		tt2++;
	}
}

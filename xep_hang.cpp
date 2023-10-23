#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
	int tmp = *y;
	*y = *x;
	*x = tmp;
}
int max(int a, int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int *check  = (int*)malloc(1000001 * sizeof(int));
	for(int i = 0;i<1000000+1;i++){
		check[i] = 0;
	}
	int n;scanf("%d",&n);
	int t[n],d[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&t[i]);
		scanf("%d",&d[i]);
		if(check[t[i]] < d[i]){
			check[t[i]] = d[i];
		}
	}
	for(int i =0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(t[i] > t[j]){
				swap(&t[i], &t[j]);
				swap(&d[i], &d[j]);
			}
		}
	}
	for(int i = 0;i<n;i++){
		if(check[t[i]] > d[i]){
			t[i] = 0;
			d[i] = 0;
		}
	}
//	for(int i = 0;i<n;i++){
//		printf("%d %d\n",t[i],d[i]);
//	}
	int tmp = 0;
	for(int i = 0;i<n;i++){
		if(t[i] != 0 && d[i] != 0){
			tmp = max(tmp,t[i]);
			tmp += d[i];
		}
	}
	printf("%d",tmp);
}

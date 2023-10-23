#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y) return -1;
	return 1;
}
// qsort(a,n,sizeof(int),cmp);
int gcd(int a,int b){
	if(b == 0) {
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n+2];
		for(int i = 1 ; i <= n ; i ++){
			scanf("%d",&a[i]);
		}
		a[0] = 1;
		a[n+1] = 1;
		int b[n+1];
		for(int i = 0;i<= n;i++){
			printf("%d ",lcm(a[i],a[i+1]));
		}
		printf("\n");
	}
}

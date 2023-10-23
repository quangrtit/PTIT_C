#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
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
	int n,m;scanf("%d %d",&n,&m);
	getchar();
	int a[n][n];
	int n1 = n;
	char s[100];
	int ii = 0 ;
	while(n1--){
		scanf("%s",s);
		for(int i = 0 ; i < n;i++){
			a[ii][i] = s[i] - '0';
		}
		ii ++;
	}
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j ++ ){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}


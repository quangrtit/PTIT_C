#include<stdio.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int t;scanf("%d",&t);
	int a[10] = {1,2,5,10,20,50,100,200,500,1000};
	while(t--){
		int n;scanf("%d",&n);
		int cnt = 0;
		for(int i = 9;i>=0;i--){
			if(n/a[i] > 0){
				cnt += n/a[i];
				n = n%a[i];
			}
		
		}
		printf("%d\n",cnt);
	}
}

#include<stdio.h>
int check(int n){
	int tmp = 0;
	int n1 = n;
	while(n > 0){
		if(n%10 == 9){
			return 0;
		}
		tmp = tmp * 10 + n%10;
		n = n / 10;
	}
	if(tmp == n1) return 1;
	else return 0;
}
int main(){
	int n;scanf("%d",&n);
	int cnt = 0;
	for(int i = 2;i<n;i++){
		if(check(i) == 1){
			printf("%d ",i);
			cnt ++;
		}
	}
	printf("\n");
	printf("%d",cnt);
}

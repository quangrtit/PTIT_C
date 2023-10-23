#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		int check = n-1;
		int cnt = 0;
		int ii = i;
		while(cnt <i){
			printf("%d ",ii);
			ii = ii + check;
			check -- ;
			cnt ++;
		}
		printf("\n");
	}
}


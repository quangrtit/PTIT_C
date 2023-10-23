#include<stdio.h>
#include<math.h>
int main(){
	int n,k;scanf("%d %d",&n,&k);
	if(n == 1){
		printf("No");
	}
	else{
		int tmp = 0;
		for(int i = 2;i <= n;i+=2){
			int ok = i;
			while(ok%2 == 0){
				tmp ++;
				ok = ok /2;
			}
		}
		if(tmp >= k){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
}

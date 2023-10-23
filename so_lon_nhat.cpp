#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		int check_max = -1;
		int cs[n];
		for(int i = 0;i<n;i++){
			cs[i] = 0;
		}
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
			if(check_max < a[i]){
				check_max = a[i];
			}
		}
		printf("%d\n",check_max);
		for(int i = 0;i<n;i++){
			if(a[i] == check_max){
				printf("%d",i);
				printf(" ");
			}
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int check = 0;
		for(int i = 0;i<n/2;i++){
			if(a[i] != a[n-1-i]){
				check = 1;
				break;
			}
		}
		if(check == 1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
}

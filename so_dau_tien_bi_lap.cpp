#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);		
		}
		int check = -1;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[i] == a[j]){
					check = a[i];
					break;
				}	
			}
			if(check != -1){
				printf("%d\n",check);
				break;
			}
		}
		if(check == -1){
			printf("NO\n");
		}
	}
}

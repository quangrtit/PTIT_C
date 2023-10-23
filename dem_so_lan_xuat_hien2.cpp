#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	int kk = 1;
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		int check[100000+1];
		for(int i =0;i<100000+1;i++){
			check[i] = 0;
		}
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
			check[a[i]] ++;
		}
		printf("Test %d:\n",kk);
		for(int i = 0;i<n;i++){
			if(check[a[i]] != 0){
				printf("%d xuat hien %d lan\n",a[i],check[a[i]]);
				check[a[i]] = 0;
			}
		}
		kk ++;
	}
}

#include<stdio.h>
int check[300000+1];
void sang(){
	for(int i = 0;i<= 300000;i++){
		check[i] = 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	sang();
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
			check[a[i]] ++;
		}
		for
	}
}

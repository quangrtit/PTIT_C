#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if( n == 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	int max = -1;
	int cn = 0;
	int check[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
		if(max < a[i]){
			max = a[i];
		}
		if(nt(a[i]) == 1){
			check[cn] = a[i]; 
			cn ++;
		}
	}
	printf("%d ",cn);
	for(int i = 0;i<cn;i++){
		printf("%d ",check[i]);
	}
	
	
}

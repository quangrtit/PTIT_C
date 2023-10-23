#include<stdio.h>
#include<math.h>
void swap(int *x,int *y){
	int tmp = *x;
	*x= *y;
	*y = tmp;
}
int nt(int n){
	if( n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i = 2;i <= sqrt(n);i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
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
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[i] > a[j]){
					swap(&a[i],&a[j]);
				}
			}
		}
		printf("Test %d:\n",kk);
		for(int i = 0;i<n;i++){
			if(check[a[i]] != 0 && nt(a[i]) == 1){
				printf("%d xuat hien %d lan\n",a[i],check[a[i]]);
				check[a[i]] = 0;
			}
		}
		kk ++;
	}
}

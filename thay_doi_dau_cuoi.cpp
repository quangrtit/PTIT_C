#include<stdio.h>
void solve(){
	long long n;scanf("%lld", &n);
	int two = n%10;
	int one;
	int cn = 0;
	int a[10];
	int n1 = n;
	for(int i = 0;i<10;i++){
		a[i] = 0;
	}
	int ii = 0;	
	while(n>0){
		if(n < 10){
			one = n;
		}
		a[ii] = n%10; 
		cn++;
		n = n/10;
		ii++;
	}
//	printf("%d",cn);
	if(two == 0){
		if(n1 <100){
			printf("%d",one);
		}
		else{
			int k = 0;
			for(int i = cn-2;i>=1;i--){
				k = k*10+a[i];
			}
			k = k*10 + one;
			printf("%d",k);
		}
	}
	else if(two != 0){
		if(n1 >= 100){
			int k = 0;
			k = k*10 + two;
			for(int i = cn-2;i >= 1;i--){
				k = k*10+a[i];
			}
			k = k*10 + one;
 			printf("%d",k);
		}
		else{
			printf("%d",two*10+one);
		}
	}
}
int main(){
	solve();
}

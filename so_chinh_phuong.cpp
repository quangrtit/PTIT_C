#include<stdio.h>
#include<math.h>
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		double x = n*1.0;
		double check = sqrt(x);
		long long ok = check; 
		if(ok == check){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

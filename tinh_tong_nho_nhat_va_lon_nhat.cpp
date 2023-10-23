#include<stdio.h>
long long cd_max(long long n){
	long long tmp = 0;
	long long ii = 1;
	while(n > 0){
		if(n%10 == 5){
			tmp += 6 * ii;
		}
		else{
			tmp += (n%10) * ii;
		}
		ii = ii * 10;
		n = n / 10;
	}
	return tmp;
}
long long cd_min(long long n){
	long long tmp = 0;
	long long ii = 1;
	while(n > 0){
		if(n%10 == 6){
			tmp += 5*ii;
		}
		else{
			tmp += (n%10) * ii;
		}
		ii = ii * 10;
		n = n / 10 ;
	}
	return tmp;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long x1,x2;scanf("%lld %lld",&x1,&x2);
		printf("%lld %lld",cd_min(x1) +cd_min(x2) ,cd_max(x1) + cd_max(x2));
		printf("\n");
	}
}

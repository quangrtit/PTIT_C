#include<stdio.h>
#include<math.h>
int kt_m(long long m){
	double ok = 1.0*m;
	double ok1 = sqrt(ok);
	int ok2 = ok1;
	if(ok2 == ok1){
		return ok2;
	}
	else{
		return ok2 +1;
	}
}
int kt_n(long long n){
	double ok = 1.0*n;
	double ok1 =sqrt(ok);
	int ok2 = ok1;
	if(ok2 == ok1){
		return ok2;
	}
	else{
		return ok2;
	}
}
void solve(){
	long long m,n;scanf("%lld %lld", &m, &n);
	long long cn = 0;
	int check_m = kt_m(m);
	int check_n = kt_n(n);
	if(check_m > check_n){
		printf("%d", 0);
	}
	else{
		printf("%d\n", check_n-check_m+1);
		for(int i = check_m;i<=check_n;i++){
			printf("%d\n", i*i);
		}
	}
}
int main(){
	solve();
}

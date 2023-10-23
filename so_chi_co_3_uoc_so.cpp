#include<stdio.h>
#include<math.h>
int check(long long n){
	if( n*n < 4){
		return 0;
	}
	else{
		for(int i = 2;i<n;i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
long long fake(long long n){
	if(sqrt(n) == (long long)sqrt(n)){
		return (long long)sqrt(n);
	}
	else{
		return (long long)sqrt(n)+1;
	}
}
int nt(long long n){
	if(n < 2){
		return 0;
	}
	else if( n == 2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i == 0){
				return  0;
			}
		}
		return 1;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long cn = 0;
		long long l,r;scanf("%lld %lld",&l,&r);
		for(long long i = fake(l);i<=sqrt(r);i++){
			if(nt(i) == 1){
				//printf("%d\n",i*i);
				cn ++;
			}
		}
		printf("%lld\n",cn);
	}
}

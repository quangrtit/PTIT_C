#include<stdio.h>
int tn(long long n){
	long long tmp = 0;
	long long kf = n;
	while(n > 0){
		tmp = tmp*10 +n%10;
		n = n / 10;
	}
	if(kf == tmp){
		return 1;
	}
	else{
		return 0;
	}
}
int cs(long long n){
	int tkm = 0;
	long long sum = 0;
	while(n > 0){
		if(n%10 == 6){
			tkm = 1;
		}
		sum += n%10;
		n = n / 10;
	}
	if(sum%10 == 8 && tkm == 1){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	long long a,b;scanf("%lld %lld",&a,&b);
	int cn = 0;
	for(long long i = a;i<=b;i++){
		if(tn(i) == 1 && cs(i) == 1){
			cn++;
		}
	}
	printf("%d",cn);
}

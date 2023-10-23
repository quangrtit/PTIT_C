#include<stdio.h>
#include<math.h>
int max(int a,int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int gcd(long long a,long long b){
	if(a == b){
		return a;
	}
	else if(a < b){
		int tmp = -1;
		for(int i =1;i<=sqrt(a);i++){
			if(a%i == 0){
				if(b % i == 0 && b % (a/i) == 0){
					tmp = max(tmp,max(i,a/i));
				}
				else if(b % i == 0 && b % (a/i) != 0){
					tmp = max(tmp,i);
				}
				else if(b%i != 0 && b&(a/i) == 0){
					tmp = max(tmp,a/i); 
				}
			}
		}
		return tmp;
	}
	else{
		int tmp = -1;
		for(int i =1;i<=sqrt(b);i++){
			if(b%i == 0){
				if(a % i == 0 && a % (b/i) == 0){
					tmp = max(tmp,max(i,b/i));
				}
				else if(a % i == 0 && a % (b/i) != 0){
					tmp = max(tmp,i);
				}
				else if(a%i != 0 && a%(b/i) == 0){
					tmp = max(tmp,b/i); 
				}
			}
		}
		return tmp;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long a,  b , c, d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(gcd(a,b) == gcd(c,d)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

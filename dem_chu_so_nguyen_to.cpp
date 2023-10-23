#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
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
int find(int b[],int jj){
	for(int j = 0;j<20;j++){
		if(b[j] == jj){
			return j;
		}
	}
}
int main(){
	long long n;scanf("%lld",&n);
	long long n1 =  0 ;
	while(n>0){
		n1 = n1*10+(n%10);
		n = n/10;
	}
	int a[20];
	int b[20];
	for(int i = 0;i<20;i++){
		a[i] = 0;
		b[i] = -1;
	}
	int ii = 0;
	while(n1 > 0){	
		if(nt(n1%10) == 1){
			a[n1%10] ++;
			if(b[n1%10] == -1){
				b[n1%10] = ii;
				ii ++;
			}
		}
		n1 = n1 / 10;
	}
	//printf("%d\n",ii);
	int jj = 0;
	while(ii -- ){
		printf("%d %d\n",find(b,jj),a[find(b,jj)]);
		jj ++;
	}	
}

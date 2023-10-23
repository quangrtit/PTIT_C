#include<stdio.h>
#include<math.h>
int a[100];
void sang(){
	for(int i = 0;i<100;i++){
		a[i] = 0;
	}
	a[0] = 1,a[1] = 1;
	for(int i = 2;i<=sqrt(100);i++){
		if(a[i] == 0){
			for(int j = i*2;j<100;j+=i){
				a[j] = 1;
			}
		}
	}
}
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
int tcs(int n){
	int tmp = 0;
	while(n > 0){
		if(a[n%10] == 1){
			return 0;
		}
		tmp += n%10;
		n = n / 10;
	}
	if(a[tmp] == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	sang();
	while(t--){
		int cn = 0;
		int a,b;scanf("%d %d",&a,&b);
		for(int i = a;i<=b;i++){
			if(tcs(i) == 1 && nt(i) == 1){
				//printf("%d ",i);
				cn ++;
			}
		}
		printf("%d\n",cn);
	}
//	for(int i = 0;i<100;i++){
//		if(a[i] == 0){
//			printf("%d ",i);
//		}
//	}
}

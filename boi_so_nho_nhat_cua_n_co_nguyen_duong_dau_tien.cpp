#include<stdio.h>
#include<math.h>
int a[101];
void sang(){
	for(int i = 0;i<=100;i++){
		a[i] = 0;
	}
	for(int i = 2;i<=sqrt(100);i++){
		if(a[i] == 0){
			for(int j = i*2;j<=100;j+=i){
				a[j] = 1;
			}
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	sang();
	while(t--){
		int n;scanf("%d",&n);
		long long check = 1;
		for(int i = 2;i<=n;i++){
			if(a[i] == 0){
				check *= pow(i,(int)(log(n)/log(i)));
			}
		}
		printf("%lld\n",check);
	}
}

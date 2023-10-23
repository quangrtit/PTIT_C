#include<stdio.h>
#include<math.h>
int a[2000001];//sang de tim uoc nguyen to nho nhat
void sang(){
	for(int i = 1;i<=2000000;i++){
		a[i] = i;
	}
	for(int i = 2;i<=sqrt(2000000);i++){
		if(a[i] == i){// neu gia su no la so nguyen to
			for(int j = i*i;j<=2000000;j += i){
				if(a[j] == j){
					a[j] = i;
				}
			}
		}
	}
}
int pt(int n){
	int cn = 0;
	while(n > 1){
		cn += a[n];
		n = n/a[n];
	}
	return cn;	
}
int main(){
	sang();
	int n;scanf("%d",&n);
	int x;
	long long tmp = 0;
	while(n--){
		scanf("%d",&x);
		tmp += pt(x);
	}
	printf("%lld",tmp);
//	for(int i = 2;i<20+1;i++){
//		printf("%d %d",i,a[i]);
//		printf("\n");
//	}
}

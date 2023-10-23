#include<stdio.h>
#include<math.h>
int tcs(int n){
	int cn = 0;
	int check = 0;
	while(n > 0){
		cn += n%10;
		if(n%10 == 4){
			return 0;
		}
		n = n / 10;
	}
	if(cn %10  == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[10];
		for(int i = pow(10,n-1);i < pow(10,n);i++){
			int ii = 0;
			int nc = 0;
			int ok = i;
			while(ok > 0){
				a[ii] = ok%10;
				nc ++;
				ii ++;
				ok = ok / 10;
			}
			int ktkt = 0;
			for(int i1 = 0;i1<nc/2;i1++){
				if(a[i1] != a[nc-1-i1]){
					ktkt = 1;
					break;
				}
			}
			if(ktkt == 0){
				if(tcs(i) == 1){
					printf("%d",i);
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}

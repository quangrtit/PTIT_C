#include<stdio.h>
int chec_boi(int n,int p){
	if(n < p){
		return 0;
	}
	else{
		int cn = 0;
		for(int i = p;i<=n;i++){
			int ok = i;
			if(ok %p  == 0){
				while(ok % p == 0){
					cn ++;
					ok = ok / p;
				}
			}
		}
		return cn;
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,p;scanf("%d %d",&n,&p);
		printf("%d\n",chec_boi(n,p));
	}
}

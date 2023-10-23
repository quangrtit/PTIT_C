#include<stdio.h>
int pow(int a,int b){
	int cn = 1;
	for(int i = 1; i<=b;i++){
		cn*=a;
	}
	return cn;
}
int main(){
	int t = 0;scanf("%d",&t);
	while(t--){
		int a[8];
		int n;scanf("%d",&n);
		for(int i = pow(10,n-1) ; i<pow(10,n);i++){
			int cncn = 0;
			int momo = i;
			
			int ii = 0,cn = 0;
			while(i > 0){
				a[ii] = i%10;
				cn ++;
				i = i /10;
				ii++;
			}
			for(int i1 = 1;i1<=cn - 1;i1++){
				if(a[i1] < a[i1-1]){
					cncn = 1;
					break;
				}
			}
			if(cncn == 0){
				printf("%d",momo);
				printf(" ");
			}
		}
		printf("\n");
	}
}

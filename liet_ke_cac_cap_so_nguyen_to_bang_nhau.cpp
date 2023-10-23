#include<stdio.h>
#include<math.h>
int gcd(int a,int b){// mac dinh 2 < a < b
	int check = -1;
	for(int i = a;i>=2;i--){
		if(a%i == 0 && b%i ==0){
			return 0;
		}
		
	}
	return 1;
}
void solve(){
	int a,b;scanf("%d %d",&a,&b);
	for(int i = a;i<=b-1;i++){
		for(int j = i+1;j <= b;j++){
			if(gcd(i,j) == 1){
				printf("(");
				printf("%d",i);
				printf(",");
				printf("%d",j);
				printf(")");
				printf("\n");
			}
		}
	}
}
int main(){
	solve();
}

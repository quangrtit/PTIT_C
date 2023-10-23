#include<stdio.h>

int tn(int n){
	int n1 = n;
	int tmp = 0;
	int check_6 = 0;
	int tcs = 0;
	while(n > 0){
		if(n%10 == 6){
			check_6 = 1;
		}
		tcs += n%10;
		tmp = tmp*10 + n%10;
		n = n / 10;
	}
	if(tmp == n1&& check_6 == 1 && tcs % 10 == 8){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;scanf("%d %d",&a,&b);
	int tmp = 0;
	if(a > b){
		tmp = b;
		b = a;
		a = tmp;
	}
	for(int i = a;i<=b;i++){
		if(tn(i) == 1){
			printf("%d ",i);
		}
	}
}

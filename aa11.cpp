#include<stdio.h>
#include<string.h>
#include<math.h>
void in(){
	int ee = 10;
	for(int i =  1 ; i  <= 19 ; i +=2){
		for(int ii = 1 ; ii <= ee;ii++){
			printf(" ");
		}
		for(int j = i/2 + 1 ;j <= i ; j ++){
			printf("%d",j%10);
		}
		for(int j = i-1 ; j >= i/2+1;j -- ){
			printf("%d",j%10);
		}
		for(int ii = 1 ;ii <= ee ; ii ++){
			printf(" ");
		}
		ee--;
		printf("\n");
	}
}
void nt(){
	int n;scanf("%d",&n);
	if(n == 2){
		printf("YES\n");
	}
	else if(n < 2){
		printf("NO\n");
	}
	else{
		int cnt = 0;
		for(int i = 2 ; i <= sqrt(n) ; i ++){
			if(n%i == 0){
				printf("NO\n");
				cnt = 1;
				break;
			}
		}
		if(cnt == 0){
			printf("YES\n");
		}
	}
}
void fibo(){
	int n;scanf("%d",&n);
	int f1 = 1,f2 = 1,tmp,cnt = 3;
	if(n == 1 || n == 2){
		printf("%d",f1);
	}
	else if(n == 3){
		printf("%d",f1+f2);
	}
	else{
		while(cnt <= n){
			tmp = f1 + f2;
			f1 = f2;
			f2 = tmp;
			cnt ++;
			
		}
		printf("%d",tmp);
	}
	printf("\n");
}
void tk(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i ++){
		scanf("%d",&a[i]);
	}
	int x;scanf("%d",&x);
	int cnt = -1;
	for(int i =  0 ; i  < n ; i  ++ ){
		if(a[i] == x){
			cnt = i;
			break;
		}
	}
	printf("%d",cnt);
}
void sapxep(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0  ;  < n ; i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ;  i < n - 1 ; i ++){
		for(int j = i  +1; j < n ; j  ++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0 ; i < n ; i ++){
		printf("%d ",a[i]);
	}
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		fibo();
	}
}

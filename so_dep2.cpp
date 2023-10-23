#include<stdio.h>
#include<math.h>
int tcs(long long n,int a[],int x){
	int tong = 0; 
	int ii = 0,cn = 0;
	while(n > 0){
		a[ii] = n%10;
		cn ++;
		tong  += n%10;
		n = n / 10;
		ii++;
	}
	if(tong % 10 != 0){
		return 0;
	}
	else{
		for(int i = 0;i<cn/2;i++){
			if(a[i] != a[cn - 1-i]){
				return 0;
			}
		}
		return 1;
	}
	
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a[20];
		int tmp = 0;
		int n;scanf("%d",&n);
		if(n <8){
			for(long long i = pow(10,n-1);i<pow(10,n);i++){
				if(tcs(i,a,20) == 1){
					tmp ++;
				}
			}
			printf("%d\n",tmp);
		}
		else{
			if(n == 8){
				printf("%d\n",1800);
			}
			else{
				printf("%d\n",9000);
			}
		}
	}
}
//M?t s? du?c coi là d?p n?u n?u nó có tính ch?t thu?n ngh?ch và t?ng ch? s? chia h?t cho 10.  Bài toán d?t ra là cho tru?c s? ch? s?. Hãy d?m xem có bao nhiêu s? d?p v?i s? ch? s? nhu v?y. 
//
//D? li?u vào: Dòng d?u tiên ghi s? b? test. M?i b? test vi?t trên m?t dòng s? ch? s? tuong ?ng c?n ki?m tra (l?n hon 1 và nh? hon 10).
//
//K?t qu?:  M?i b? test vi?t ra s? lu?ng s? d?p tuong ?ng.

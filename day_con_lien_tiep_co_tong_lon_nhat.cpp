#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		int check = 0;
		int max = -100000;
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i] > 0){
				check = 1;
			}
			if(max < a[i]){
				max = a[i];
			}
		}
		if(check == 0){
			printf("%d\n",max);
		}
		else{
			long long tong_check2 = 0;
			long long tong_check1 = -100000000000;
			for(int i = 0;i<n;i++){
				tong_check2 += a[i];
				if(tong_check1 < tong_check2){
					tong_check1 = tong_check2;
					//printf("%lld\n",tong_check1);
				}
				if(tong_check2 < 0){
					tong_check2 = 0;
				}
			}
			printf("%lld\n",tong_check1);
		}
		
	}
}// y tuong su dung thuat toan kadane .dung hai bien x1 x2 trong do x1 lien tuc cap nhap va x2 luu ki luc

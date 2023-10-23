#include<stdio.h>
#include<string.h>
int main(){
	char aa[201];
	int a[301],b[301],c[301];
	scanf("%s",aa);
	int  n = strlen(aa);
	for(int i = 0;i<n;i++){
		a[i] = (int)(aa[i]-'0');
	}
	while(n > 1){
		int i1= 0;
		if(n %2 == 0){
			for(int i = 0;i<n;i++){
				if(i < n/2){
					b[i] = a[i];
				}
				else{
					c[i1] = a[i];
					i1++;
				}
			}
		}
		else{
			b[1] = 0;
			for(int i = 0;i<n;i++){
				if(i < n/2){
					b[i+2] = a[i];
				}
				else{
					c[i1+1] = a[i];
					i1++;
				}
			}
		}
		if(n%2 == 0){
			int ii = n/2;
			int tmp = 0;
			while(ii >= 1){
				if(b[ii-1]  + c[ii-1] +tmp <= 9){
					a[ii] = b[ii-1] + c[ii-1] + tmp;
					tmp = 0;
				}
				else{
					a[ii] = b[ii-1]  + c[ii-1] -10 + tmp;
					tmp = 1;
				}
				ii --;
			}
			if(tmp == 1){
				a[0] = 1;
				for(int i = 0;i<=n/2;i++){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n / 2 +1;
			}
			// co hai th 
			// 1 la bat dau tu 0 hai la bat dau tu 1 
			//ta can gan lai cho bat dau tu 0
			else if(tmp == 0){
				for(int i = 1;i<=n/2;i++){
					printf("%d",a[i]);
				}
				printf("\n");
				n = n /2;
			}
			
		}
		else if(n%2 == 1){
			int ii = n/2+1;
			int tmp = 0;
			while(ii >= 0){
				if(b[ii]  + c[ii] + tmp<= 9){
					a[ii-1] = b[ii] + c[ii] + tmp;
					tmp = 0;
				}
				else {
					a[ii-1] = b[ii]  + c[ii] -10 + tmp;
					tmp = 1;
				}
				ii --;
			}
			for(int i = 0;i<=n/2;i++){
				printf("%d",a[i]);
			}
			printf("\n");
			n = n / 2 +1 ;
		}
		
	}
}

#include<stdio.h>
#include<string.h>
#include<math.h>

int equal(int a[501],int b[501],int n){
	for(int i = 0 ; i < n ; i ++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}
void inkq(int a[],int n){
	for(int i = 0 ; i < n ; i ++){
		printf("%d ",a[i]);
		
	}
	printf("\n");
}
int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0){
			break;
		}
		getchar();
		char s1[501],s2[501],s3[501],s4[501];
		scanf("%s%s%s",s1,s2,s3);
		int a1[501],a2[501],a3[501],tmp[501];
		int ii = 0;
		for(int i = 0 ; i < n ; i ++){
			a1[i] = (int)s1[i];
			a2[i] = (int)s2[i];
			tmp[i] = (int)s1[i];
			tmp[n+i] = (int)s2[i];
		}
		for(int i = 0 ; i < strlen(s3) ; i ++){
			a3[ii] = s3[i];
			ii++;
		}
//		inkq(a1,n);
//		inkq(a2,n);
//		inkq(a3,2*n);
		int oha[501];
		for(int i = 0 ; i < 2*n ; i ++){
			oha[i] = 0;
		}
		int cnt = 0,ok = 0;
		int io = 0;
		while(equal(oha,tmp,2*n) == 0){
			if(io == 0){
				for(int i = 0 ; i < 2*n ; i ++){
					oha[i] = tmp[i];
				}
			}
			for(int i = 0 ; i < n ; i ++){
				tmp[2*i] = a2[i];
				tmp[2*i + 1] = a1[i];
			}
			for(int i = 0 ; i < n ; i ++){
				a1[i] = tmp[i];
				a2[i] = tmp[i+n];
			}
//			inkq(tmp,2*n);
//			printf("%d\n",ok);
			cnt ++;
			io ++;
			if(equal(a3,tmp,2*n) == 1){
				printf("%d\n",cnt);
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			printf("%d\n",-1);
		}
	}
}

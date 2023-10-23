#include<stdio.h>
#include<string.h>
int max(int a,int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int check(int a[],int b[],int ii){
	for(int i = 0;i<ii;i++){
		if(a[i] != b[i]){
			if(a[i] > b[i]){
				return 1;
			}
			else{
				return 2;
			}
			break;
		}
	}
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char aa[701],bb[701];
		scanf("%s %s",&aa,&bb);
		int a[701],b[701];
		int aa_size = strlen(aa),bb_size = strlen(bb);
		int size = max(aa_size,bb_size);
		for(int i= 0;i<strlen(aa);i++){
			a[i] = (int)(aa[i] - '0');
		}
		for(int i = 0;i<strlen(bb);i++){
			b[i] = (int)(bb[i] - '0');
		}
		if(strlen(aa) > strlen(bb)){
			int ok = strlen(aa) - strlen(bb);
			for(int i = 0;i<ok;i++){
				b[i] = 0;
			}
			int i1 = 0;
			for(int i = ok;i<strlen(aa);i++){
				b[i] = (int)(bb[i1] - '0');
				i1++;
			}
		}
		else if(strlen(aa) < strlen(bb)){
			int ok = strlen(bb) - strlen(aa);
			for(int i = 0;i<ok;i++){
				a[i] = 0;
			}
			int i1 = 0;
			for(int i = ok ;i < strlen(bb);i++){
				a[i] = (int)(aa[i1] - '0');
				i1++;
			}
		}
		int c[701];
		if(check(a,b,size) == 0){
			printf("0\n");
		}
		else if(check(a,b,size) == 1){	
			int ii = size - 1;
			int tmp = 0;
			while(ii >= 0){
				if(a[ii] - b[ii] - tmp >=  0){
					c[ii] = a[ii] - b[ii] - tmp;
					tmp = 0;
				}
				else{
					c[ii] = a[ii] - b[ii] +10 - tmp;
					tmp = 1;
				}
				ii --;
			}
			int jj = 0;
			while(c[jj] == 0){
				jj ++;
			}
			for(int i = jj;i < size;i++){
				printf("%d",c[i]);
			}
			printf("\n");
		}
		else{
			int ii = size - 1;
			int tmp = 0;
			while(ii >= 0){
				if(b[ii] - a[ii] - tmp >=  0){
					c[ii] = b[ii] - a[ii] - tmp;
					tmp = 0;
				}
				else{
					c[ii] = b[ii] - a[ii] +10 - tmp;
					tmp = 1;
				}
				ii --;
			}
			int jj = 0;
			while(c[jj] == 0){
				jj ++;
			}
			for(int i = jj;i < size;i++){
				printf("%d",c[i]);
			}
			printf("\n");
		}	
	}
}

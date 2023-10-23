#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
struct xau{
	int x[105];
	int lex;
};
int kiemtra(int a[105],int b[105],int size){
	for(int i = 0 ; i < size ; i ++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}
int tv(int b[105],int check[105],int size){// b can xoay bao nhieeu lan thi ra check
	int mt[105];
	for(int i = 0 ; i < size ;i ++){
		mt[i] = b[i];
		mt[size+i] = b[i];
	}
	int cnt = 0;
	for(int i = 0 ; i  < size*2 ; i ++){
		int ktg[105];
		int ii = 0; 
		for(int j = i ; j  < i + size ; j ++){
			ktg[ii] = mt[j];
			ii ++;
		}
		if(kiemtra(ktg,check,size) == 1){
			return cnt;
		}
		cnt ++;
	}
	return 100000;
}
int main(){
	int n;scanf("%d",&n);
	getchar();
	struct xau a[n];
	char aa[105];
	for(int i = 0 ; i < n ; i ++){
		scanf("%s",aa);
		a[i].lex = strlen(aa);
		for(int j = 0 ; j < strlen(aa); j++){
			a[i].x[j] = aa[j] - '0';
		}
	}
	int size = a[0].lex;
	int tmp[105];
	int tong = 10000000;
	for(int i = 0 ; i < a[0].lex ; i ++){
		tmp[i] = a[0].x[i];
		tmp[size+i] = a[0].x[i];
	}	
	for(int  i = 0 ; i < size * 2 ; i ++){
		int check[105];
		int ii = 0;
		for(int j = i ; j < i + size; j ++){
			check[ii] = tmp[j];
			ii ++;
		}
		int cnt = 0;
		for(int i1 = 0 ; i1 < n ; i1 ++){
			cnt += tv(a[i1].x,check,size);
		}
		if(tong > cnt){
			tong = cnt;
		}
	}
	if(tong < 100000){
		printf("%d",tong);
	}
	else{
		printf("%d",-1);
	}
}

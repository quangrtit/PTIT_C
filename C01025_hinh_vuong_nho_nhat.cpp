#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int max1(int a,int b){
	if(a >= b){
		return a;
	}
	else{
		return b;
	}
}
int aa[1005];
int main(){
	int a1,a2,a3,a4;
	int b1,b2,b3,b4;
	scanf("%d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4);
	aa[0] = 0;
	aa[1]= abs(a1-b1),aa[2] = abs(a1 - b3),aa[3] = abs(a3 - b1),aa[4] = abs(a3-b3),aa[5] = abs(a2 - b2),aa[6] = abs(a2 - b4),aa[7] = abs(a4 - b2),aa[8] = abs(a4 - b4),aa[9] = abs(a1 - a3),aa[10] = abs(a2-a4),aa[11] = abs(b1-b3),aa[12] = abs(b2 - b4);
	int tmp = -1;
	for(int i = 1 ; i <= 12; i ++){
		if(aa[i] > tmp){
			tmp = aa[i];
		}
	}
	printf("%d\n",tmp*tmp);
}

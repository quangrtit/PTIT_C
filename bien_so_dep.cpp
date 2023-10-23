#include<stdio.h>
#include<string.h>
int check1(int b[],int ii){
	int ok1 = 0;
	for(int i = 0;i<ii;i++){
		if(b[i] == 6 || b[i] == 8){
			ok1 ++;
		}
	}
	if(ok1 == 5){
		return 1;
	}
	if(b[3] == b[4] && b[0] == b[1] && b[2] == b[0]){
		return 1;
	}
	if(b[0] < b[1] && b[1] < b[2] &&b[2] < b[3] && b[3] < b[4]){
		return 1;
	}
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char a[20];
		fgets(a,20,stdin);
		int ii = 0;
		int b[20];
		for(int i = 6;i<strlen(a);i++){
			if(a[i] != '.'){
				b[ii] =(int)( a[i] - '0');
				ii ++;
			}
		}
		if(check1(b,ii) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

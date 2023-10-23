#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		for(int i = 2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int  main(){
	int n;scanf("%d",&n);
	int check = 0;
	int ii = 2;
	while(1>0){
		if(nt(ii) == 1){
			printf("%d\n",ii);
			check++;
		}
		if(check == n){
			break;
		}
		ii++;
	}
}

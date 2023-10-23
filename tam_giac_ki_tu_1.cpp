#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int tmp = 97;
	for(int i = 1;i<=n;i++){
		if(i%2 == 1){
			for(int j = 1;j<=i;j++){
				printf("%c ",(char)(tmp));
				tmp ++;
			}
			printf("\n");
		}
		else{
			tmp += i-1;
			int e = tmp;
			for(int j = 1;j<=i;j++){
				printf("%c ",(char)(tmp));
				tmp --;
			}
			printf("\n");
			tmp = e+1;
		}
	}
}

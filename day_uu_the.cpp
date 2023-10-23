#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a[300];
		int ii = 0;
		char x = ' ';
		while(x != '\n'){
			scanf("%d",&a[ii]);
			ii ++;
			x = getchar();
		}
		int odd = 0;
		for(int i = 0;i<ii;i++){
			if(a[i] %2 == 1){
				odd ++;
			}
		}
		if(ii % 2 == 1 && odd > ii-odd){
			printf("YES\n");
		}
		else if(ii % 2 == 0 && ii - odd > odd){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

#include<stdio.h>
#include<math.h>
int main(){
	int t;scanf("%d",&t);
	int ii = 1;
	while(t--){
		int n;scanf("%d",&n);
		if(n == 1){
			printf("Test %d", ii);
			printf(":");
			printf(" ");
			printf("2(0)");
		}
		else{
			printf("Test %d", ii);
			printf(":");
			printf(" ");
			for(int i = 2;i <= n;i++){
				int cn = 0;
				if(n%i == 0){
					printf("%d",i);
					while(n%i == 0){
						n = n/i;
						cn ++;
					}
					printf("(%d)",cn);
					printf(" ");
				}
			}
			printf("\n");
		}
		ii++;
	}
}
//Test 1: 2(2) 3(1) 5(1)
//
//Test 2: 2(7)
//
//Test 3: 2(4) 5(4)

//Test 1 : 2(2) 3(1) 5(1)
//Test 2 : 2(7)
//Test 3 : 2(4) 5(4)




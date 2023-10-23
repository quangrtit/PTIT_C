#include<stdio.h>
#include<string.h>
struct poke{
	char x[100];
	int p,k;//p-da can trong 1 lan tien hoa
	// k -so da ban dau co
};
int main(){
	int n;scanf("%d",&n);
	struct poke ok1[n];
	getchar();
	for(int i = 0 ; i < n ;i ++){
		scanf("%s",ok1[i].x);
		scanf("%d %d", &ok1[i].k,&ok1[i].p);
		getchar();
	}
	char l[100];
	int oh = -1;
	int cnt = 0;
	for(int i = 0 ; i < n ; i ++ ){
		if(oh < ((ok1[i].p-ok1[i].k)/(ok1[i].k-2) + 1)){
			oh = (ok1[i].p-ok1[i].k)/(ok1[i].k-2) + 1;
			strcpy(l,ok1[i].x);
		}
		if(ok1[i].p-ok1[i].k > 0){
			cnt += (ok1[i].p-ok1[i].k)/(ok1[i].k-2) + 1;
		}
	}
	
	printf("%d\n%s",cnt,l);
}

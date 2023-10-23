#include<stdio.h>
struct tg{
	int a,b,c;
	int s;
};
void swap(int *a,int *b){
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
int main(){
	int n;scanf("%d",&n);
	struct tg cmp[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&cmp[i].a);
		scanf("%d",&cmp[i].b);
		scanf("%d",&cmp[i].c);
		cmp[i].s = cmp[i].a * cmp[i].b * cmp[i].c;
	}
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(cmp[i].s > cmp[j].s){
				swap(&cmp[i].s,&cmp[j].s);
				swap(&cmp[i].a,&cmp[j].a);
				swap(&cmp[i].b,&cmp[j].b);	
				swap(&cmp[i].c,&cmp[j].c);
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d %d %d\n",cmp[i].a,cmp[i].b,cmp[i].c);
		
	}
	
}

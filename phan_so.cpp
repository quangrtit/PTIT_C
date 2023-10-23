#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
void rutgon(int *m,int *n){
	int ok = gcd(*m,*n);
	*m /= ok;
	*n /= ok;
}
struct ps{
	int x,y;
	
};


int main(){
	int t;scanf("%d",&t);
	int ii = 1;
	while(t--){
		struct ps a1,a2;
		scanf("%d %d %d %d",&a1.x,&a1.y,&a2.x,&a2.y);
		//rut gon
		rutgon(&a1.x,&a1.y);
		rutgon(&a2.x,&a2.y);
		//quy dong
		int check11 = lcm(a1.y,a2.y);
		a1.x *= check11/a1.y ;
		a2.x *= check11/a2.y;
		a1.y = check11;
		a2.y = check11;
		struct ps a3 ;
		a3.x = a1.x + a2.x;
		a3.y = a1.y;
		rutgon(&a3.x,&a3.y);
		struct ps a4 ;
		a4.x = a1.x ;
		a4.y = a2.x ;
		rutgon(&a4.x,&a4.y);
		printf("Case #%d:\n",ii);
		printf("%d/%d ",a1.x,a1.y);
		printf("%d/%d\n",a2.x,a2.y);
		printf("%d/%d\n",a3.x,a3.y);
		printf("%d/%d\n",a4.x,a4.y);
		ii ++;
	}
}

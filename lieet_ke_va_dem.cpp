//#include<stdio.h>
//#include<math.h>
//#include<limits.h>
//
//#define foru(i,a,b) for(int i=a;i<=b;++i)
//#define ford(i,b,a) for(int i=b;i>=a;--i)
//#define ii pair<int,int>
//#define ll long long
//#define fi first
//#define se second
//
//int x,n,a[100005],b[100005],c[100005],i,cnt,sz;
//
//int check(int n){
//    int a=n%10,b;
//    n/=10;
//    while(n>0){
//        b=n%10;
//        if (b>a) return 0;
//        a=b;
//        n/=10;
//    }
//    return 1;
//}
//
//void swap(int *a,int *b){
//    int c=*a;
//    *a=*b;
//    *b=c;
//}
//
//void qsort1(int l,int r){
//    int i=l;
//    int j=r;
//    int x=a[(l+r)/2];
//    while(i<=j){
//        while(a[i]<x) i++;
//        while(a[j]>x) j--;
//        if (i<=j){
//            swap(&a[i],&a[j]);
//            i++;
//            j--;
//        }
//    }
//    if (l<j) qsort1(l,j);
//    if (i<r) qsort1(i,r);
//}
//
//void qsort2(int a[],int b[],int l,int r){
//    int i=l;
//    int j=r;
//    int x=a[(l+r)/2];
//    while(i<=j){
//        while(a[i]>x) i++;
//        while(a[j]<x) j--;
//        if (i<=j){
//            swap(&a[i],&a[j]);
//            swap(&b[i],&b[j]);
//            i++;
//            j--;
//        }
//    }
//    if (l<j) qsort2(c,b,l,j);
//    if (i<r) qsort2(c,b,i,r);
//}
//
//int main(){
//    // freopen("input.txt","r",stdin);
//    // freopen("output.txt","w",stdout);
//    n=0;
//    while(scanf("%d",&x)!=-1)
//        if (check(x)) a[n++]=x;
//    qsort1(0,n-1);
//    cnt=1;
//    sz=0;
//    for(i=0;i<n-1;++i)
//        if (a[i]==a[i+1]) cnt++;
//        else{
//            b[sz]=a[i];
//            c[sz]=cnt;
//            cnt=1;
//            sz++;
//        }
//    b[sz]=a[n-1];
//    c[sz]=cnt;
//    sz++;
//    qsort2(c,b,0,sz-1);
//    for(i=0;i<sz;++i) printf("%d %d\n",b[i],c[i]);
//}
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y) return -1;
	return 1;
}
int check(int n){
	int tmp = 121;
	while(n > 0 ){
		if(n%10 <= tmp){
			tmp = n % 10;
		}
		else{
			return 0;
		}
		n = n  / 10;
	}
	return 1;
}
struct so{
	int gtri;
	int sl;
	int dd;
};
void swap(int *x , int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	struct so a[10000];
	int ii = 0; 
	int x;
	while(scanf("%d",&x) != -1){
		if(check(x) == 1){
			a[ii].gtri = x;
			a[ii].sl = 1;
			a[ii].dd = 0;
			ii ++;
		}
	}
//	for(int i = 0 ; i < ii ; i ++){
//		printf("%d ",a[i].gtri);
//	}
//	printf("\n");
	for(int i = 0 ; i < ii ; i ++){
		if(a[i].sl != -1){
			for(int j = 0; j < ii ; j ++){
				if(a[i].gtri == a[j].gtri && j != i){
					a[i].sl++;
					a[j].sl = -1;
				}
			}
		}
	}
	struct so b[10000];
	int jj = 0; 
	for(int i = 0 ; i < ii; i ++){
		if(a[i].sl != -1){
			b[jj].gtri = a[i].gtri;
			b[jj].sl = a[i].sl;
			jj ++;
		}
	}
	for(int i = 0 ; i < jj-1 ; i ++){
		for(int j = i  +1;j < jj ; j ++){
			if(b[i].sl  < b[j].sl){
				swap(&b[i].gtri,&b[j].gtri);
				swap(&b[i].sl,&b[j].sl);
			}
		}
	}
	for(int i = 0 ; i < jj ; i ++){
		printf("%d %d\n",b[i].gtri,b[i].sl);
	}
}

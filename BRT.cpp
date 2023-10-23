#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
void swap(long long *x,long long *y){
	long long tmp = *x;
	*x = *y;
	*y = tmp;
}
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		int a[n];
		for(int i = 0 ; i < n ; i ++){
			scanf("%d",&a[i]);
		}
		
		long long cnt = 0;
		int n1 = sizeof(a) / sizeof(a[0]);
		qsort(a, n1, sizeof(int), compare);
//		for(int i = 0 ;i < n-1;i++){
//			for(int j = i+1;j<n;j++){
//				if(a[i] < a[j]){
//					swap(&a[i],&a[j]);
//				}	
//			}
//		}
		long long check = LLONG_MAX;
		for(int i = 0;i<n-1;i++){
			if(check > abs(a[i] - a[i+1])){
				check = abs(a[i] - a[i+1]);
			}
		}
		for(int i = 0;i<n-1;i++){
			if(check == abs(a[i] - a[i+1])){
				cnt ++;
			}
		}
		printf("%lld %lld\n",check,cnt);		
	}
	
}

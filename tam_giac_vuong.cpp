#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bs(long long arr[], int l, int r, long long x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int meet_mid(long long a[],int l,int r,long long x){
	while(l <= r){
		if(a[l] + a[r] == x){
			return 1;
		}
		else if(a[l] + a[r] < x){
			l++;
		}
		else{
			r--;
		}
	}
	return -1;
}
int cmp(const void *a,const void *b){
	long long *x = (long long*)a;
	long long *y = (long long*)b;
	if(*x < *y) return -1;
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		long long a[n];
		for(int i = 0 ; i < n ; i ++){
			scanf("%lld",&a[i]);
			a[i] = a[i] *a[i];
		}
		if(n < 3){
			printf("NO\n");
		}
		else{
			int cnt = 0;
			qsort(a,n,sizeof(long long),cmp);
			for(int i = n-1;i>1;i--){
				if(meet_mid(a,0,i-1,a[i]) == 1){
					cnt = 1;
					printf("YES\n");
					break;
				}
			}
			if(cnt == 0){
				printf("NO\n");
			}
		}
	}
}

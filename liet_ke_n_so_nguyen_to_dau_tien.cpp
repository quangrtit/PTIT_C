//#include<stdio.h>
//int a[100000+1];
//void solve(){
//	int n;scanf("%d",&n);
//	for(int i = 0;i<=100000;i++){
//		a[i] = 0;
//	}
//	for(int i = 2;i <= 100000;i++){
//		if(a[i] == 0){
//			for(int j = 2;j<=100000/i;j++){
//				a[j*i] = 1;
//			}
//		}
//	}
//	int cn = 0;
//	for(int i = 2;i<=100000;i++){
//		if(a[i] == 0){
//			printf("%d\n",i);
//			cn ++;
//			if(cn == n){
//				break;
//			}
//		}
//	}
//
//}
//int main(){
//	solve();
//}
#include<stdio.h>

int a[100000+1];

void solve() {
    int n;
    scanf("%d",&n);
    for(int i = 0;i<=100000;i++){
        a[i] = 0;
    }

    int cnt = 0;
    for(int i = 2; cnt < n; i++) {
        if(a[i] == 0){
            printf("%d\n",i);
            cnt ++;
            for(int j = 2;i*j<=100000;j++){
                a[j*i] = 1;
            }
        }
    }
}

int main(){
    solve();
    return 0;
}

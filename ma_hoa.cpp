#include<stdio.h>
#include<string.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char a[105];
		scanf("%s",a);
		a[strlen(a)] = '1';
////		int ii = 0;
////		int dd[90];
////		for(int i = 65;i<= 90;i++){
////			dd[i] =  0;
////		}
////		for(int i = 0;i<strlen(a);i++){
////			dd[a[i]] ++;
////		}
////		for(int i = 0;i<strlen(a);i++){
////			if(dd[a[i]] > 0){
////				printf("%c%d",a[i],dd[a[i]]);
////				dd[a[i]] = 0;
////			}
////		}
		int ii = 0;
		while(ii < strlen(a)-1){
			if(a[ii] == a[ii+1]){
				int cnt = 1;
				int jj = ii + 1;
				while(a[ii] == a[jj]){
					cnt ++;
					jj ++;
				}
				printf("%c%d",a[ii],cnt);
				ii = jj ;
			}
			else{
				printf("%c%d",a[ii],1);
				ii++;
			}
		}
	}
}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int t;scanf("%d",&t);
//	while(t--){
//		char a[105];
//		scanf("%s",a);
//		int ii = 0;
//		int dd[91];
//		for(int i = 65;i<= 90;i++){
//			dd[i] =  0;
//		}
//		for(int i = 0;i<strlen(a);i++){
//			dd[a[i]] ++;
//		}
//		for(int i = 0;i<strlen(a);i++){
//			if(dd[a[i]] > 0){
//				printf("%c%d",a[i],dd[a[i]]);
//				dd[a[i]] = 0;
//			}
//		}
//	}
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int t;
//    scanf("%d", &t);
//    while(t--) {
//        char s[105];
//        scanf("%s", s);
//        int n = strlen(s);
//        int count = 1;
//        for(int i = 1; i <= n; i++) {
//            if(i == n || s[i] != s[i-1]) {
//                printf("%c%d", s[i-1], count);
//                count = 1;
//            } else {
//                count++;
//                if(count > 9) {
//                    printf("%c%d", s[i-1], count-1);
//                    count = 1;
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

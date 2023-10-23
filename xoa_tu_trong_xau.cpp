//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<ctype.h>
//struct xau{
//	char a1[201];
//	char a2[201];
//	int sl;
//};
//int main(){
//	int t;scanf("%d",&t);
//	getchar();
//	int tt = 1;
//	while(t--){
//		char s1[201],s2[201];
//		gets(s1);gets(s2);
//		struct xau oh1[201],oh2[201];
//		int ii1 = 0,ii2 = 0;
//		char *token = strtok(s1," ");
//		while(token != NULL){
//			strcpy(oh1[ii1].a1,token);
//			oh1[ii1].sl = 0;
//			for(int i = 0 ; i < strlen(token);i++){
//				if(token[i] >= 65 && token[i] <= 90){
//					oh1[ii1].a2[i] = token[i] + 32;
//				}
//				else{
//					oh1[ii1].a2[i] = token[i];
//				}
//			}
//			ii1 ++;
//			token = strtok(NULL," ");
//		}
//		char s22[205];
//		for(int j = 0 ; j < strlen(s2);j++){
//			if(s2[j] >= 65 && s2[j] <= 90){
//				s22[j] = s2[j] + 32;
//			}
//			else{
//				s22[j] = s2[j];
//			}
//		}
//		printf("Test %d: ",tt);
//		tt++;
//		for(int i1 = 0 ; i1 < ii1;i1++){
//			if(strcmp(s22,oh1[i1].a2) != 0){
//				printf("%s ",oh1[i1].a1);
//			}
//		}
//		printf("\n");
//	}
//}
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 205

int t,n,c[N],cnt,kt;
char s1[N],s2[N],a[N][N],b[N],*tok;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d\n",&t);
    foru(i,1,t){
        gets(s1);
        gets(s2);
        printf("Test %d: ",i);
        strcpy(b,s2);
        foru(j,0,strlen(b)-1) b[j]=tolower(b[j]);
        strcpy(s2,b);
        tok=strtok(s1," ");
        n=0;
        while(tok!=NULL){
            strcpy(a[n++],tok);
            tok=strtok(NULL," ");
        }
        foru(j,0,n-1){
            strcpy(b,a[j]);
            foru(z,0,strlen(b)-1) b[z]=tolower(b[z]);
            if (strcmp(b,s2)!=0) printf("%s ",a[j]);
        }
        printf("\n");
    }
}

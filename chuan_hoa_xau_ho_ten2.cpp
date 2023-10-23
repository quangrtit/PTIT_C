#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<ctype.h>
#include<math.h>
char*strlwr(char c[]){ 
   for (int i=0;i<strlen(c);i++){
  	  if (c[i]>='A' &&c[i]<='Z'){
  			c[i]+=32;
		}
    }
    return c;
}
int strcmp(char a[],char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1!=n2) return 0;
	for(int i=0;i<n1;i++){
		if(tolower(a[i]) != tolower(b[i])) return 0;
	}
	return 1;
} 
int main(){
	char c[5005];
	gets(c); 
	strlwr(c);
	char a[20][50];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		++n;
		token=strtok(NULL," ");
	}
	int b[n]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==1){
					cnt++;
					b[j]=1;
				}
			}
			printf("%s %d\n",a[i],cnt);
		}
	}
} 


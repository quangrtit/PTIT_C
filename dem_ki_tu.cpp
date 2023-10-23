#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char a[1000];
	gets(a);
	int cn1 = 0,cn2 = 0,cn3 = 0;
	for(int i = 0;i<strlen(a);i++){
		if(0 <= a[i] - '0' && a[i] - '0' <= 9){
			cn1 ++;
		}
		else if((65 <= a[i] && a[i] <= 90) || (97 <= a[i] && a[i] <= 122)){
			cn2 ++;
		}
		else{
			cn3 ++;
		}
	}
	printf("%d %d %d",cn2,cn1,cn3);
}

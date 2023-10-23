#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char s1[200],s2[200];
	gets(s1);
	getchar();
	gets(s2);
	int check = 0;
	int ii = 0;
	while(ii<strlen(s1) - strlen(s2)){
		if(s1[ii] != s2[0] && s1[ii+1] != s2[1] && s1[ii+2] != s2[2]){
			ii = ii +3;
			continue;
		}
		ii ++;
	}
	
}

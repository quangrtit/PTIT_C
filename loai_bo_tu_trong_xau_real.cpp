#include<stdio.h>
#include<string.h>
int check(char s2[101],char s1[101],int ii){
	for(int i = 0;i<strlen(s2);i++){
		if(s1[ii+i] != s2[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s1[101],s2[101];
	gets(s1);;
	gets(s2);
	int ii = 0;
	while(ii < strlen(s1)-1){
		if(check(s2,s1,ii) == 1){
			printf("%c",s1[ii+strlen(s2)]);
			ii = ii +strlen(s2)+1;
		}
		else{	
			printf("%c",s1[ii]);	
			ii++;
		}
	}
	if(s2[strlen(s2)-1] != s1[strlen(s1)-1]){
		printf("%c",s1[strlen(s1)-1]);
	}
}
//#include <stdio.h> 
//#include <string.h>
//void check(char str1[], char str2[]) {
//	int k = strlen(str2), n = strlen(str1), ok = 0;
//	int i,j; 
//	for (i = 0; i < n; i++) { 
//		if (str1[i] == str2[0]) { 
//		ok = 0; 
//		for (j = 0; j < k; j++) { 
//			if (str1[i+j] != str2[j]) {
//				ok = 1; break;
//				} 
//			} if(ok == 0) i+=j; 
//		} 
//		printf("%c", str1[i]);
//		} 
//		}
//int main() {
//	char str1[100], str2[100]; 
//	gets(str1); 
//	getchar();
//	gets(str2); 
//	check(str1,str2); 
//}

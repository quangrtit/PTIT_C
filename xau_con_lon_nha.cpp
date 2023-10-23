#include<stdio.h>
#include<string.h>
int main(){
	char s[100000+3];
	scanf("%s",s);
	int dd[123];
	int check = 0;
	for(int i =0;i<strlen(s);i++){
		if(s[i] <= 97){
			check = 1;
		}
		dd[s[i]] = 1;
	}
	if(check == 0){
	
		int ii = 122;
		int kk = 0;
		while(ii >= 97 && kk <= 122){
			if(dd[ii] == 1){
				for(int i = kk;i<strlen(s);i++){
					if(s[i] == (char)ii){
						printf("%c",s[i]);
						kk = i+1;
					}
				}
			}
			ii -- ;
		}
	}
	else{
		for(int i = 0;i<strlen(s);i++){
			s[i] = (char)(s[i] +32);
			dd[s[i]] = 1;
		}
		int ii = 122;
		int kk = 0;
		while(ii >= 97 && kk <= 122){
			if(dd[ii] == 1){
				for(int i = kk;i<strlen(s);i++){
					if(s[i] == (char)ii){
						printf("%c",(char)(s[i]-32));
						kk = i+1;
					}
				}
			}
			ii -- ;
		}
	}
}

#include<stdio.h>
#include<string.h>
int check(int mm[],int ii){
	if( mm[0] %2 == 1 || mm[1] % 2 == 1 || mm[2] != mm[3] || mm[4] != mm[5] || mm[6] != mm[7]){
		return 0;
	}
	return 1;
}
int main(){
	char s[1000],a[8] = {(char)39 ,(char)34,(char)123,(char)125,(char)91,(char)93,(char)40,(char)41 };
	scanf("%s",s);
	int mm[8], ii = 0;
	for(int i = 0;i<8;i++){
		mm[i] = 0;
	}
	for(int j = 0;j<8;j++){
		for(int i = 0;i<strlen(s);i++){
			if(s[i] == a[j]){
				mm[ii]++;
			}
		}
		ii ++;
	}
	printf("%d",check(mm,ii));
}

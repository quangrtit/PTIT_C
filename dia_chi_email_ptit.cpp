#include<stdio.h>
#include<string.h>
struct name{
	char x[55];
};
char chuanhoa(char x){
	if(x >= 65 && x<= 90){
		return (char)(x+32);
	}
	return x;
}
int main(){
	struct name ok[100];
	char a[50];
	int ii = 0;
	char token = ' ';
	char lt[100];
	while(token != '\n'){
		scanf("%s",a);
		lt[ii] = chuanhoa(a[0]);
		//printf("%c\n",lt[ii]);
		ii ++;
		token = getchar();
	}
	//printf("%d",ii);
	for(int i = 0;i<strlen(a);i++){
		lt[ii-1] = chuanhoa(a[i]);
		ii ++;
	}
	printf("%s",lt);
	printf("@ptit.edu.vn");
}

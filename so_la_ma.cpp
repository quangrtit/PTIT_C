#include<stdio.h>
#include<string.h>
int tv(char x){
	if(x == 'I'){
		return 1;
	}
	else if(x == 'V'){
		return 5;
	}
	else if(x == 'X'){
		return 10;
	}
	else if(x == 'L'){
		return 50;
	}
	else if(x == 'C'){
		return 100;
	}
	else if(x == 'D'){
		return 500;
	}
	else if(x == 'M'){
		return 1000;
	}
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char s[100];scanf("%s",s);
		int size = strlen(s);
		if(size == 1){
			printf("%d\n",tv(s[0]));
		}
		else{
			int check = tv(s[size-1]);
			for(int i = size-2;i >= 0;i--){
				if(tv(s[i+1]) <= tv(s[i])){
					check += tv(s[i]);
				}
				else{
					check -= tv(s[i]);
				}
			}
			printf("%d\n",check);
		}
	}
}

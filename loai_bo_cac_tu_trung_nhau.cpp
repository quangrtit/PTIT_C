#include<stdio.h>
#include<string.h>
struct kt{
	char a[100];
};
int main(){
	char a[1000];
	gets(a);
	char *fake = strtok(a, " ");
	struct kt ok[100];
	int ii = 0;
	while(fake != NULL){
		for(int i = 0;i<strlen(fake);i++){
			ok[ii].a[i] = fake[i];
		}
		fake = strtok(NULL," ");
		ii ++;
	}
	for(int i = 0;i<ii-1;i++){
		for(int j = i+1;j<ii;j++){
			if(strcmp(ok[i].a , ok[j].a) == 0){
				strcpy(ok[j].a,"");
 			}
		}
	}	
	for(int i = 0;i<ii;i++){
	    if(strcmp(ok[i].a, "") != 0){
	        printf("%s ", ok[i].a);
	    }
	}
}

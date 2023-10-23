#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%s",a);
	int dd[91],n = strlen(a);
	for(int i = 0 ; i < 91;i++){
		dd[i] = 0;
	}
	int cnt = 0;
	for(int i = 0; i < n-1;i ++){
		if(dd[a[i]] == 0){
			int vt = -1;
			for(int j = i+1;j<n;j++){
				if(a[j] == a[i]){
					vt = j;
					break;
				}
			}
			//printf("%d\n",vt);
			if(vt == i+1 || vt == n-1 || vt == -1){
				continue;
			}
			else{
				//printf("%d  %d\n",vt,i+1);
				for(int j1 = i+1;j1 < vt;j1++){
					for(int j2 = vt+1;j2 < n;j2++){
						//printf("%c %c\n",a[j1],a[j2]);
						if(a[j1] == a[j2] && dd[a[j1]] == 0 && dd[a[j2]] == 0) cnt++;
					}
				}
			}
			dd[a[i]] = 1;
		}
	}
	printf("%d",cnt);
}

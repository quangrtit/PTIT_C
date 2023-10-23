#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	int ttt = 1;
	while(t--){
		int n,m;scanf("%d %d",&n,&m);
		int a[n][m];
		int check = 0,real = 0;
		int dd[100],ii = 0;
		for(int i = 0;i<n;i++){
			int demo = 0;int vt = i;
			for(int j = 0;j<m;j++){
				scanf("%d",&a[i][j]);
				demo += a[i][j];
			}
			if(demo > check){
				check = demo;
				real = vt;
			}
			else if(demo == check){
				dd[ii] = vt;
				ii ++;
			}
		}
//		int iii = 0,tong;
//		while(iii < ii){
//			for(int j = 0;j<m;j++){
//				for(int i = 0;i<n;i++){
//					if(i != dd[iii]){
//						
//					}
//				}
//			}
//			iii ++;
//		}		
		int tongt = -1,reala = 0;	
		for(int j = 0;j<m;j++){
			int tongx = 0,vt1 = j;
			for(int i = 0;i<n;i++){
				if(i != real){
					tongx += a[i][j];
				}
			}
			if(tongx > tongt){
				tongt = tongx;
				reala = vt1;
			}
		}
		printf("Test %d:\n",ttt);
		ttt ++;
		for(int i = 0;i<n;i++){
			if(i != real){
				for(int j = 0;j<n;j++){
					if(j != reala){
						printf("%d ",a[i][j]);
					}
				}
				printf("\n");
			}
		}
	}
}

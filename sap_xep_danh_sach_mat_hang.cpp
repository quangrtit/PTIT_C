#include<stdio.h>
#include<string.h>
struct mh{
	int ma_mh;
	char te_mh[100];
	char nhom_mh[100];
	float giamua,giaban;
	float loinhuan;
};
int main(){
	int n;scanf("%d",&n);
	getchar();
	struct mh a[n];
	for(int i = 0; i < n ; i ++){
		gets(a[i].te_mh);
		gets(a[i].nhom_mh);
		scanf("%f",&a[i].giamua);
		scanf("%f",&a[i].giaban);
		a[i].ma_mh = i+1;
		a[i].loinhuan = a[i].giaban - a[i].giamua;
		getchar();
	}
	for(int i = 0; i < n-1 ; i ++){
		for(int j = i+1;j<n;j++){
			if(a[i].loinhuan < a[j].loinhuan){
				// hoan doi loi nhuan
				float xx = a[i].loinhuan;
				a[i].loinhuan = a[j].loinhuan;
				a[j].loinhuan  = xx;
				//hoan doi te_mh
				char x[1000];
				strcpy(x,a[i].te_mh);
				strcpy(a[i].te_mh,a[j].te_mh);
				strcpy(a[j].te_mh,x);
				//hoan doi nhom_mh
				char x1[1000];
				strcpy(x1,a[i].nhom_mh);
				strcpy(a[i].nhom_mh,a[j].nhom_mh);
				strcpy(a[j].nhom_mh,x1);
				//hoan doi vtri
				int x2 = a[i].ma_mh;
				a[i].ma_mh = a[j].ma_mh;
				a[j].ma_mh = x2;
				//printf("OK\n");
			}
		}
	}
	for(int i = 0; i < n ; i ++){
		printf("%d %s %s %.2f",a[i].ma_mh,a[i].te_mh,a[i].nhom_mh,a[i].loinhuan);
		printf("\n");
	}
}

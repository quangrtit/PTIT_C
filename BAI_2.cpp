#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
struct dathuc{
	float heso[105];
	int somu[105] , len;
	char value;
};
void in_dathuc(struct dathuc a){
	for(int i = 0 ; i < a.len ; i ++){
		if(a.heso[i] > 0 && i != 0) printf("+%.1f*%c^%d",a.heso[i],a.value,a.somu[i]);
		else printf("%.1f*%c^%d",a.heso[i],a.value,a.somu[i]);
	}
	printf("\n");
}
void thugon_dathuc(struct dathuc *a){
	int dd[a->len] = {0};
	for(int i = 0 ; i < a->len - 1 ; i ++){
		for(int j = i + 1 ; j < a->len ; j ++){
			if(a->somu[i] < a->somu[j]){
				int tmp = a->somu[i] ; a->somu[i] = a->somu[j] ; a->somu[j] = tmp;
				float cnt = a->heso[i] ; a->heso[i] = a->heso[j] ; a->heso[j] = cnt;
			}
		}
	}
	int size = a->somu[0] ; int f1[size + 1] = {0};
	for(int i = 0 ; i < a->len ; i ++){
		f1[a->somu[i]] += a->heso[i];
	}
	struct dathuc b; int ii = 0;
	for(int i = size ; i >= 0 ; i --){
		if(f1[i] != 0){
			b.somu[ii] = i ; b.heso[ii] = f1[i];
			ii ++;
		}
	}
	for(int i = 0 ; i < ii ; i ++){
		if(b.heso[i] != 0){
			a->heso[i] = b.heso[i];
			a->somu[i] = b.somu[i];
		}
	}
	a->len = ii;
}
void nhap(struct dathuc *a){
	int ix = 0;
	printf("nhap vao so luong cap he so va so mu: ");
	int n ; scanf("%d",&n);
	while(ix < n){
		printf("nhap vao he so thu %d: ",ix);
		scanf("%f",&a->heso[ix]);
		printf("nhap vao so mu thu %d: ",ix);
		scanf("%d",&a->somu[ix]);
		ix ++;		
	}
	getchar();
	printf("nhap vao bien cua dathuc: ");
	scanf("%c" , &a->value);
	a->len = n ; thugon_dathuc(a) ; in_dathuc(*a);
}
dathuc tongdathuc(struct dathuc a , struct dathuc b){
	thugon_dathuc(&a); thugon_dathuc(&b);
	int ii = 0 , jj = 0 , ee = 0; struct dathuc tong;
	while(ii < a.len && jj < b.len){
		if(a.somu[ii] > b.somu[jj]){
			tong.heso[ee] = a.heso[ii] ; tong.somu[ee] = a.somu[ii] ; ii ++ ; ee ++;
		}
		else if(a.somu[ii] < b.somu[jj]){
			tong.heso[ee] = b.heso[jj] ; tong.somu[ee] = b.somu[jj] ; jj ++ ; ee ++;
		}
		else{
			tong.heso[ee] = a.heso[ii] + b.heso[jj] ; tong.somu[ee] = a.somu[ii] ; ii ++ ; jj ++ ; ee++;
		}
	}
	if(ii < a.len){
		for(int i = ii ; i < a.len ; i ++){
			tong.heso[ee] = a.heso[i] ; tong.somu[ee] = a.somu[i] ; ee ++; 
		}
	}
	if(jj < b.len){
		for(int i = jj ; i < b.len ; i ++){
			tong.heso[ee] = b.heso[i] ; tong.somu[ee] = b.somu[i] ; ee ++; 
		}
	}
	tong.len = ee ; tong.value = a.value;
	thugon_dathuc(&tong);
	return tong;
}
dathuc hieudathuc(struct dathuc a , struct dathuc b){// hieu cua da thuc a - b 
	thugon_dathuc(&a); thugon_dathuc(&b);
	struct dathuc hieu; int ii = 0;
	for(int i = 0 ; i < b.len ; i ++){
		b.heso[i] *= -1;
	}
	hieu = tongdathuc(a,b); thugon_dathuc(&hieu); hieu.value = a.value;
	return hieu;
}
dathuc tich_dathuc(struct dathuc a , struct dathuc b){// tinh tich hai da thuc
	thugon_dathuc(&a); thugon_dathuc(&b); struct dathuc tich;
	int ii = 0;
	for(int i = 0 ; i < a.len ; i ++){
		for(int j = 0 ; j < b.len ; j ++){
			tich.heso[ii] = a.heso[i] * b.heso[j] ; tich.somu[ii] = a.somu[i] + b.somu[j] ; ii ++;
		}
	}
	tich.len = ii ; tich.value = a.value ; thugon_dathuc(&tich);
	return tich;
}
dathuc thuong_dathuc(struct dathuc a , struct dathuc b){
	thugon_dathuc(&a); thugon_dathuc(&b); struct dathuc thuong ; int ii = 0; int tmp = a.somu[0];
	while(tmp >= b.somu[0]){
		thuong.heso[ii] = a.heso[0] / b.heso[0];
		thuong.somu[ii] = a.somu[0] - b.somu[0];
		ii ++; thuong.len = ii;
		a = hieudathuc(a , tich_dathuc(thuong , b));
		tmp = a.somu[0];
	}
	thuong.len = ii;
	thugon_dathuc(&thuong);
	return thuong;
}
void dao_ham(struct dathuc a){
	thugon_dathuc(&a) ; struct dathuc tmp ; int ii = 0;
	for(int i = 0 ; i < a.len ; i ++){
		if(a.somu[i] != 0){
			tmp.heso[ii] = a.heso[i] * a.somu[i];
			tmp.somu[ii] = a.somu[i] - 1;
			ii ++;
		}
	}
	tmp.len = ii; tmp.value = a.value;
	in_dathuc(tmp);
}
void phandu(struct dathuc a , struct dathuc b){
	struct dathuc c = thuong_dathuc(a,b);
	in_dathuc(hieudathuc(a,tich_dathuc(c,b)));
}
int main(){
	struct dathuc a , b;
	nhap(&a) ; nhap(&b);
	struct dathuc c = tongdathuc(a,b); printf("tong cua da thuc a va b la: ") ; in_dathuc(c);
	struct dathuc d = hieudathuc(a,b); printf("hieu cua da thuc a tru da thuc b la: ") ; in_dathuc(d);
	struct dathuc e = tich_dathuc(a,b); printf("tich cua da thuc a va b la: ") ; in_dathuc(e);
	printf("dao ham cua da thuc can tinh da thuc tich la: ") ; dao_ham(e);		
	struct dathuc f = thuong_dathuc(a,b); printf("thuong cua da thuc a cho da thuc b la: "); in_dathuc(f);
	printf("phan du cua da thuc a cho da thuc b la: "); phandu(a,b);
}

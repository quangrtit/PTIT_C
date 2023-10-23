#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
struct phanso{
	int tu,mau;
};
int UCLN(int a , int b){
	if(b == 0) return a;
	return UCLN(b , a % b);
}
void rutgon(struct phanso *sum){
	int uocchung = UCLN(sum->tu , sum->mau);
	sum->tu /= uocchung;
	sum->mau /= uocchung;
}
void nhap(struct phanso *a){
	printf("nhap vao tu so: ");
	scanf("%d", a->tu);
	printf("nhap vao mau so: ");
	scanf("%d",a->mau);
}
void xuat(struct phanso *b){
	printf("%d/%d\n",b->tu,b->mau);
}
phanso cong(struct phanso *a , struct phanso *b){
	struct phanso sum;
	sum.tu = a->tu * b->mau + a->mau * b->tu; sum.mau = a->mau * b->mau;
	rutgon(&sum);
	return sum;
}
phanso tru(struct phanso *a, struct phanso *b){
	struct phanso sum;
	sum.tu = a->tu * b->mau - a->mau * b->tu; sum.mau = a->mau * b->mau;
	rutgon(&sum);
	return sum;
}
phanso tich(struct phanso *a , struct phanso *b){
	struct phanso tich;
	tich.tu = a->tu * b->tu; tich.mau = a->mau * b->mau;
	rutgon(&tich);
	return tich;
}
phanso thuong(struct phanso *a , struct phanso *b){
	struct phanso thuong;
	thuong.tu = a->tu * b->mau ; thuong.mau = a->mau * b->tu;
	rutgon(&thuong);
	return thuong;
}
void check_duong_am(struct phanso *a){
	if(a->tu * a->mau < 0){
		printf("-1"); return;
	}
	printf("1");
}
void so_sanh(struct phanso *a , struct phanso *b){
	if(a->tu * b->mau > a->mau * b->tu) printf("1\n");
	else if(a->tu * b->mau < a->mau * b->tu) printf("-1\n");
	else printf("0\n");
}
void quydong(struct phanso *a , struct phanso *b){
	int boichung = (a->mau * b->mau) / UCLN(a->mau , b->mau);
	a->tu = a->tu * (boichung / a->mau);
	b->tu = b->tu * (boichung / b->mau);
	a->mau = boichung; b->mau = boichung;
}
int main(){
	struct phanso a , b;
	nhap(&a) ; xuat(&a) ; nhap(&b) ; xuat(&b);
	struct phanso c = cong(&a,&b); printf("tong hai phan so la: ") ; xuat(&c);
	struct phanso d = tru(&a,&b); printf("hieu hai phan so la: ") ; xuat(&d);
	struct phanso e = tich(&a,&b); printf("tich hai phan so la: ") ; xuat(&e);
	struct phanso f = thuong(&a,&b); printf("thuong hai phan so la: ") ; xuat(&f);
	check_duong_am(&f);
	so_sanh(&a,&b);
	quydong(&a,&b);
	xuat(&a);xuat(&b);
}

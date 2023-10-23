#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
void nhap(int a[] , int *n){// nhap mot mang
	printf("nhap vao so luong phan tu: ");
	scanf("%d", &*n);
	for(int i = 0 ; i < *n ; i ++){
		scanf("%d", &a[i]);
	}
}
void xuat(int a[] , int n){
	for(int i = 0 ; i < n ; i ++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void ramdom_arr(int a[] , int *n1){// tao mang ngau nhien
	srand(time(NULL));
	int n = rand(); n = n % 10;
	printf("so luong phan tu mang ngau nhien la: %d\n",n);
	int ii = 0;
	while(ii < n){
		int x = rand();
		a[ii] = x % 10;
		ii ++;
	}
	*n1 = n;
}
void xuat_ramdom_arr(int a[] , int *n1){// in mang ngau nhien
//	printf("%d\n",*n1);
	for(int i = 0 ; i < *n1 ; i ++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void  max_arr(int a[] , int n){// tim gia tri lon nhat cua mang
	int check_max = a[0];
	for(int i = 0 ; i < n ; i ++){
		if(a[i] > check_max) check_max = a[i];
	}
	printf("phan tu lon nhat cua mang la: %d\n",check_max);
}
void min_arr(int a[] , int n){// tim gia tri nho nhat cua mang
	int check_min = a[0];
	for(int i = 0 ; i < n ; i ++){
		if(a[i] < check_min) check_min = a[i];
	}
	printf("phan tu nho nhat cua mang la: %d\n",check_min);
}
void search_equal_6(int a[] , int n){// tim phan tu dau tien tan cung bang 6 neu khong ton tai in ra -1
	for(int i = 0 ; i < n ; i ++){
		if(a[i] % 10 == -6){
			printf("vtri dau tien cua phan tu am co tan cung bang 6 la: %d \n gia tri cua phan tu do la: %d\n",i,a[i]);
			return;
		}
	}
	printf("khong tim phan tu am co tan cung bang 6 thoa man\n");
}
void search_positive(int a[] , int n){// tim vi tri phan tu duong nho nhat neu khong ton tai in ra -1
	int check_positive = -1 , vtri = -1;
	for(int i = 0 ; i < n ; i ++){
		if(a[i] > 0) check_positive = a[i];
	}
	for(int i = 0 ; i < n ; i ++){
		if(a[i] > 0 && a[i] < check_positive){
			check_positive = a[i];
			vtri = i;
		} 
	}
	if(check_positive != -1) printf("vi tri va gia tri phan tu duong nho nhat la: %d %d\n",vtri,check_positive);
	else printf("-1\n");
}
void sum_arr(int a[] , int n){// tinh tong cua mang 	
	int check_sum = 0;
	for(int i = 0 ; i < n ; i ++) check_sum += a[i];
	printf("tong cac phan tu trong mang la: %d\n",check_sum);
}
void average(int a[] , int n){// tinh trung binh cong cua mang
	int check_sum = 0;
	for(int i = 0 ; i < n ; i ++) check_sum += a[i];
	printf("gia tri trung binh cac phan tu trong mang la: %.1f\n",check_sum/(float)n);
}
void search(int a[] , int n){// tim kiem vi tri 1 phan tu trong mang neu khong thay thi tra ve -1
	printf("nhap phan tu can tim kiem: ");
	int x ; scanf("%d",&x);
	for(int i = 0 ; i < n ; i ++){
		if(a[i] == x){
			printf("vi tri cua phan tu can tim kiem la: %d\n",i);
			return;
		}
	}
	printf("-1");
}
void merge(int a[] , int l , int r){// sap xep 1 khoang tu l den r cua mang a bang cach tron hai day da sap xep tang dan
	int mid = (l + r) / 2, b[10005], c[10005], ii = 0 , jj = 0;
	for(int i = l ; i <= mid ; i ++){
		b[ii] = a[i];
		ii ++;
	}
	for(int i = mid + 1 ; i <= r ; i ++){
		c[jj] = a[i];
		jj ++;
	}
	int ii1 = 0 ,jj1= 0;
	while(ii1 < ii && jj1 < jj){
		if(b[ii1] <= c[jj1]){
			a[l] = b[ii1];
			l ++ ; ii1 ++;
		}
		else if(b[ii1] > c[jj1]){
			a[l] = c[jj1];
			l ++ ; jj1 ++;
		}
	}
	if(ii1 < ii){
		for(int i = ii1 ; i < ii ; i ++){
			a[l] = b[i];
			l ++;
		}
	}
	if(jj1 < jj){
		for(int i = jj1 ; i < jj ; i ++){
			a[l] = c[i];
			l ++;
		}
	}
}
void sort_arr(int a[] , int l , int r){// sap xep mang da cho theo thu tu tang dan
	if(l >= r) return ;
	int mid = (l + r) / 2;
	sort_arr(a , l , mid);
	sort_arr(a , mid + 1 , r);
	merge(a,l,r);
}
void sort_arr1(int a[] , int n){// sap xep mang da cho giam dan
	for(int i = 0 ; i < n - 1 ; i ++){
		for(int j = i + 1 ; j < n ; j ++){
			if(a[i] < a[j]){
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
}
void dao_nguoc(int a[] , int n){// xuat day dao nguoc cua day ban dau
	printf("day can dao nguoc la(sau khi da sap xep): \n");
	for(int i = n - 1 ; i >= 0 ; i --) printf("%d ", a[i]);
	printf("\n");
}
void chen_x(int a[] , int n){// chen phan tu x vao vi tri k
	int x ,k ;
	printf("nhap phan tu can chen: ") ; scanf("%d",&x);
	printf("\n");
	printf("nhap vi tri can chen: ") ; scanf("%d",&k);
	printf("\n");
	a[k] = x;
}
void xoa(int a[] , int *n){// xoa 1 phan tu o vi tri k
	int k ; printf("nhap vi tri can xoa: ") ; scanf("%d",&k);
	printf("\n");
	for(int i = k ; i < *n ; i ++){
		if(i < *n - 1) a[i] = a[i + 1];
		else a[i] = -1;
	}
	if(k < *n) *n = *n - 1; 
}
void sum_positive(int a[] , int n){// dem va in so luong phan tu duong trong mang
	int sum_check = 0 , soluong = 0;
	for(int i = 0 ; i < n ; i ++){
		if(a[i] > 0){
			soluong ++;
			sum_check += a[i];
		}
	}
	printf("so luong phan tu duong cua mang: %d\ntong cac phan tu duong trong mang la: %d\n", soluong, sum_check);
}
void kiemgtra_doixung(int a[] , int n){// kiem tra xem mang co doi xung khong neu co tra ve 1 neu khong doi xung tra ve 0
	for(int i = 0 ; i < n / 2 ; i ++){
		if(a[i] != a[n - 1 - i]){
			printf("mang khong doi xung\n");
			return;
		}
	}
	printf("day la mang doi xung\n");
}
void kiemtra_tangdan(int a[] , int n){// kiem tra xem mang co sap xep tang dan khong neu co in ra 1 neu khong in ra 0
	for(int i = 1 ; i < n ; i ++){
		if(a[i - 1] > a[i]){
			printf("mang da cho khong phai mang tang dan\n");
			return;
		}
	}	
	printf("day la mang tang dan\n");
}

int main(){
	int n , n_ramdom ; int a[1005] , a_ramdom[1005];
	ramdom_arr(a_ramdom , &n_ramdom);
	xuat_ramdom_arr(a_ramdom , &n_ramdom);
	nhap(a,&n);
	max_arr(a,n);
	min_arr(a,n);
	search_equal_6(a,n);
	search_positive(a,n);
	sum_arr(a,n);
	average(a,n);
	search(a,n);
	sort_arr(a , 0 , n - 1);
	sort_arr1(a , n);
	dao_nguoc(a,n);
	chen_x(a,n);
	xoa(a,&n);
	sum_positive(a,n);
	kiemgtra_doixung(a,n);
	kiemtra_tangdan(a,n);
	xuat(a,n);
}



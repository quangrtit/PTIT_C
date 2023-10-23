#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void swap(int *a , int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int nguyento(int n){
	if(n < 2){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else{
		for(int i = 2 ; i <= sqrt(n) ; i ++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}
void ramdom_arr(int a[305][305] , int *m , int *n){
	printf("nhap so hang: ");
	scanf("%d",&*m);
	printf("nhap so cot: ");
	scanf("%d",&*n);
	for(int i = 0 ; i < *m ; i++){
		for(int j = 0 ; j < *n ; j ++){
			a[i][j] = rand() % 10;
		}
	}
}
void in_arr(int a[305][305] , int m , int n){
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void MAX(int a[305][305] , int m , int n){
	int check_max = a[0][0];
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(a[i][j] > check_max) check_max = a[i][j];
		}
	}
	printf("gia tri lon nhat cua ma tran la: %d\n",check_max);
}
void MIN(int a[305][305] , int m , int n){
	int check_min = a[0][0];
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(a[i][j] < check_min) check_min = a[i][j];
		}
	}
	printf("gia tri nho nhat cua ma tran la: %d\n",check_min);
}
void sap_xep_zigzac(int a[305][305] , int m , int n){// zigzac theo hang
	for(int i = 0 ; i < m ; i ++){
		if(i % 2 == 0){
			for(int j1 = 0 ; j1 < n - 1; j1 ++){
				for(int j2 = j1 + 1 ; j2 < n ; j2 ++){
					if(a[i][j1] < a[i][j2]) swap(&a[i][j1],&a[i][j2]);
				}
			}
		} 	
		else{
			for(int j1 = 0 ; j1 < n - 1; j1 ++){
				for(int j2 = j1 + 1 ; j2 < n ; j2 ++){
					if(a[i][j1] > a[i][j2]) swap(&a[i][j1],&a[i][j2]);
				}
			}
		}
	}
}
void them_dong(int a[305][305] ,int m , int n){
	int v_size; printf("nhap so luong phan tu can them: "); scanf("%d",&v_size);
	int v[v_size];
	for(int i = 0 ; i < v_size ; i ++) scanf("%d",&v[i]);
	for(int j = 0 ; j < v_size ; j ++){
		a[m][j] = v[j];
	}
}
void them_dong_thu_k(int a[305][305] ,int *m , int *n){
	int v_size; printf("nhap so luong phan tu can them vao dong thu k: "); scanf("%d",&v_size);
	int v[v_size];
	for(int i = 0 ; i < v_size ; i ++) scanf("%d",&v[i]);
	int k ; printf("nhap vao dong can them: ") ; scanf("%d",&k);
	for(int j = 0 ; j < v_size ; j ++){
		a[k][j] = v[j];
	}
	if(k == *m) *m = *m + 1;
}
void xoa(int a[305][305] , int *m , int *n){
	int k ; printf("nhap dong can xoa: ") ; scanf("%d",&k);
	for(int i = k ; i < *m - 1 ; i ++){
		for(int j = 0 ; j < *n ; j ++){
			a[i][j] = a[i + 1][j];
		}
	}
	if(k < *m) *m = *m - 1;// giam bot di 1 dong
}
void tim_phan_tu(int a[305][305] , int m , int n){// tra ve vi tri phan tu lon nhat tren dong va nho nhat tren cot
	// xet phan tu lon nhat tren dong tung dong
	for(int i = 0 ; i < m ; i ++){
		int check_max = a[i][0];
		int vtri = -1;
		for(int j = 0 ; j < n ; j ++){
			if(check_max < a[i][j]){
				check_max = a[i][j];
				vtri = j;
			}
		}
		int kiemtra = 1;
		for(int i1 = 0 ; i1 < m ; i1 ++){
			if(i1 != i){
				if(check_max > a[i1][vtri]){
					kiemtra = -1;
					break;
				}
			}
		}
		if(kiemtra == 1){
			printf("phan tu thoa man lon nhat tren dong va nho nhat tren cot co vi tri: \n");
			printf("hang: %d\ncot: %d\n",i,vtri);
			break;
		} 
		if(i == m - 1 && kiemtra == -1){
			printf("khong ton tai vi tri thoa man lon nhat tren dong ma nho nhat tren cot\n");
		}
	}
}
void tong_hai_matran(int a[305][305] , int b[305][305] , int m , int n){
	int c[305][305];
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("tong hai ma tran la: \n");
	in_arr(c,m,n);
}
void tich_hai_matran(int a[305][305] , int b[305][305] , int m_a , int n_a , int n_b){
	int c[305][305];
	for(int i = 0 ; i < m_a ; i ++){
		for(int j = 0 ; j < n_b ; j ++){
			int tmp = 0;
			for(int ix = 0 ; ix < n_a ; ix++){
				tmp += a[i][ix] * b[ix][j];
			}
			c[i][j] = tmp;
		}
	}
	printf("tich hai ma tran la: \n");
	in_arr(c,m_a,n_b);
}
void tong_nguyento(int a[305][305], int m , int n){
	int tong = 0;
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(nguyento(a[i][j])) tong += a[i][j];
		}
	}
	printf("tong cac so nguyen to trong ma tran la: %d\n",tong);
}
void dem_phan_tu_ma_tran_tam_giac_tren(int a[305][305] , int m , int n){
	int cnt = 0;
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(a[i][j] > 0 && i < j){
				cnt ++;
			}
		}
	}
	printf("so luong phan tu duong trong ma tran tam giac tren la: %d\n",cnt);
}
void trungbinhcong(int a[305][305] , int m , int n){
	float tong = 0;
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			tong += a[i][j];
		}
	}
	printf("trung binh cong cac phan tu trong ma tran la: %.2f\n",tong/(m*n));
}
void tong_bien(int a[305][305] , int m , int n){
	int tong = 0;
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(i == 0 || j == n - 1 || i == m - 1 || j == 0){
				tong += a[i][j];
			}
		}
	}
	printf("tong cac phan tu o vi tri bien: %d\n",tong);
}
int main(){
	int m , n , m1 , n1 ,a[305][305] , b[305][305];
	ramdom_arr(a,&m,&n);
	in_arr(a,m,n);
	ramdom_arr(b,&m1,&n1);
	in_arr(b,m1,n1);
	printf("ta xet trong ma tran a: \n");
	MAX(a,m,n);
	MIN(a,m,n);
	sap_xep_zigzac(a,m,n);
	them_dong(a,m,n);
	them_dong_thu_k(a,&m,&n);
	xoa(a,&m,&n);
	tim_phan_tu(a,m,n);
	if(m == m1 && n == n1) tong_hai_matran(a,b,m,n);
	else printf("khong tinh duoc tong\n");
	if(n == n1) tich_hai_matran(a,b,m,n,n1);
	else printf("khong tinh duoc tich hai ma tran\n");
	tong_nguyento(a,m,n);
	dem_phan_tu_ma_tran_tam_giac_tren(a,m,n);
	trungbinhcong(a,m,n);
	tong_bien(a,m,n);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50 

typedef struct {
    char hoTen[MAX_LEN];
    char maSo[MAX_LEN];
    int bacLuong;
} NhanVien;


void nhapNhanVien(NhanVien *nv) {
    printf("Nhap ho ten: ");
    fgets(nv->hoTen, MAX_LEN, stdin);
    strtok(nv->hoTen, "\n"); 
    printf("Nhap ma so: ");
    fgets(nv->maSo, MAX_LEN, stdin);
    strtok(nv->maSo, "\n"); 
    printf("Nhap bac luong: ");
    scanf("%d", &nv->bacLuong);
    getchar(); 
}

void xuatNhanVien(NhanVien nv) {
    printf("%-20s %-10s %d\n", nv.hoTen, nv.maSo, nv.bacLuong);
}
int main() {
    FILE *f;
    NhanVien nv;
    int luong;

    f = fopen("LUONG.DAT", "wb");
    if (f == NULL) {
        printf("Loi: Khong mo duoc tap tin LUONG.DAT\n");
        return 1;
    }

    do {
        nhapNhanVien(&nv);
        fwrite(&nv, sizeof(NhanVien), 1, f);
        printf("Da ghi vao tap tin LUONG.DAT.\n");
        printf("Nhap Y hoac y de tiep tuc, nhap bat ky ky tu khac de dung: ");
    } while (getchar() == 'Y' || getchar() == 'y');

    fclose(f);


    f = fopen("LUONG.DAT", "rb");
    if (f == NULL) {
        printf("Loi: Khong mo duoc tap tin LUONG.DAT\n");
        return 1;
    }

    printf("\nThong tin luong cua cac nhan vien:\n");
    printf("%-20s %-10s %s\n", "Ho va ten", "Ma so", "Luong");

while (fread(&nv, sizeof(NhanVien), 1, f) == 1) {
    luong = nv.bacLuong * 1700000;
    printf("%-20s %-10s %d\n", nv.hoTen, nv.maSo, luong);


    fprintf(f, "%s;%s;%d;%d\n", nv.hoTen, nv.maSo, nv.bacLuong, luong);
}


fclose(f);

return 0;
}

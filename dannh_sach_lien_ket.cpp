#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct sinhvien{
	char masv[105];
	char hoten[105];
	float gpa;
};
struct node{
	struct sinhvien ok;
	struct node *next;
};
void nhap(struct sinhvien *x){
	scanf("%s",x->masv);
	getchar();
	gets(x->hoten);
	scanf("%f",&x->gpa);
}
node* makenode(struct sinhvien a){
	struct node *oj = (struct node*)malloc(sizeof(struct node));
	oj->ok = a;
	oj->next = NULL;
	return oj;
}
void in(struct sinhvien x){
	printf("%s\n",x.masv);
	printf("%s\n",x.hoten);
	printf("%.1f\n",x.gpa);
}
void nhapdanhsach(struct node **a){
	struct sinhvien x;
	nhap(&x);
	struct node *newnode = makenode(x);
	struct node *tmx = *a;
	if(*a == NULL){
		*a = newnode;
	}
	else{	
		while(tmx->next != NULL){
			tmx = tmx->next;
		}
		tmx->next = newnode;
	}
}
void indanhsach(struct node *a){
	while(a != NULL){
		in(a->ok);
		a = a->next;
	}
}
int main(){
	int n ; scanf("%d",&n);
	struct node *qlsv = (struct node*)malloc(sizeof(struct node));
	while(n -- ){
		nhapdanhsach(&qlsv);
	}
	indanhsach(qlsv);
}
//3
//CNTT1
//KHOGN VAN QUANG
//2.40
//CNTT2
//LE VAN LONG
//2.90
//CNTT3
//CHU VAN HO
//3.90

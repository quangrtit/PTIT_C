#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct sinhvien{
	char ten[100], ngaysinh[100], diachi[100];
	double gpa;
	int stt;
};

typedef struct sinhvien sv;
void xuat(sv a)
{
	printf("%s %s %s %.2lf\n", a.ten, a.ngaysinh, a.diachi, a.gpa);
}
int cmp(const void *a, const void *b)
{
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(strcmp(x->diachi, y->diachi) != 0)
	{
		if(strcmp(x->diachi, y->diachi) > 0)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return y->gpa - x->gpa;
	}
}
int main()
{
	int n; scanf("%d", &n);
	sv hihi[n];
	for(int i = 0; i < n; i++)
	{
		getchar();
		fgets(hihi[i].ten, 100, stdin); hihi[i].ten[strlen(hihi[i].ten) - 1] = '\0';
		fgets(hihi[i].ngaysinh, 100, stdin); hihi[i].ngaysinh[(strlen(hihi[i].ngaysinh)) - 1] = '\0';
		fgets(hihi[i].diachi, 100, stdin); hihi[i].diachi[strlen(hihi[i].diachi) - 1] = '\0';
		scanf("%lf", &hihi[i].gpa);
		hihi[i].stt = i;
	}
	qsort(hihi, n, sizeof(sv), cmp);
	for(int i = 0; i < n; i++)
	{
		xuat(hihi[i]);
	}
}

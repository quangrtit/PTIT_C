#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct sinhvien{
	char tensv[51];
	float diem1,diem2,diem3,tong;
	int tt;// ma sinh vien
};
void swap(float *x,float *y){
	float z = *x;
	*x = *y;
	*y = z;
}
int main(){
	struct sinhvien a[105];
	int ii = 0; 
	int tmp,news;
	while(1){
		scanf("%d",&tmp);
		if(tmp == 1){
			scanf("%d",&news);
			getchar();
			for(int i = ii ; i  <= ii +news -1;i ++){
				gets(a[i].tensv);
				a[i].tt = i+1;
				scanf("%f %f %f",&a[i].diem1,&a[i].diem2,&a[i].diem3);
				a[i].tong = a[i].diem1 + a[i].diem2 + a[i].diem3;
				getchar();
			}
			printf("%d\n",news);
			ii = ii + news;
		}
		else if(tmp == 2){
			scanf("%d",&news);
			getchar();
			gets(a[news-1].tensv);
			scanf("%f %f %f",&a[news-1].diem1,&a[news-1].diem2,&a[news-1].diem3);
			a[news-1].tong = a[news-1].diem1 + a[news-1].diem2 +a[news-1].diem3;
			printf("%d\n",news);
		}
		else if(tmp == 3){
			for(int i = 0 ; i < ii-1 ; i ++){
				for(int j = i + 1 ; j < ii ; j ++){
					if(a[i].tong > a[j].tong){
						swap(&a[i].tong,&a[j].tong);
						swap(&a[i].diem1,&a[j].diem1);
						swap(&a[i].diem2,&a[j].diem2);
						swap(&a[i].diem3,&a[j].diem3);
						char ok[105];
						strcpy(ok,a[i].tensv);
						strcpy(a[i].tensv,a[j].tensv);
						strcpy(a[j].tensv,ok);
						int hai = a[i].tt;
						a[i].tt = a[j].tt;
						a[j].tt = hai;
					}
				}
			}
			for(int i = 0 ; i < ii ; i ++){
				printf("%d %s %.1f %.1f %.1f\n",a[i].tt,a[i].tensv,a[i].diem1,a[i].diem2,a[i].diem3);
			}
			break;
		}
	}
}

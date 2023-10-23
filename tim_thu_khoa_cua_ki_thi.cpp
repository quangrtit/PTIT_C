#include<stdio.h>
#include<string.h>
struct sv{
	char ten[100],ngaysinh[100];
	float diem1,diem2,diem3;
	float tc;
	int stt;
};
int main(){
	int n;scanf("%d",&n);
	getchar();
	struct sv o[n];
	for(int i = 0 ; i < n ; i ++){
		gets(o[i].ten);
		scanf("%s",o[i].ngaysinh);
		scanf("%f %f %f",&o[i].diem1,&o[i].diem2,&o[i].diem3);
		o[i].tc = o[i].diem1 + o[i].diem2 + o[i].diem3;
		o[i].stt = i+1;
		getchar();
	}
	// tim thu khoa
	struct sv hi[n];
	int ii = 0;
	float max = -1;
	for(int i = 0;i<n;i++){
		if(max < o[i].tc){
			max = o[i].tc;
		}
	}
	for(int i = 0; i < n ; i ++){
		if(o[i].tc == max){
			hi[ii].tc = max;
			hi[ii].stt = o[i].stt;
			strcpy(hi[ii].ten,o[i].ten);
			strcpy(hi[ii].ngaysinh,o[i].ngaysinh);
			ii++;
		}
	}
	for(int i = 0 ; i < ii ; i ++){
		printf("%d %s %s %.1f\n",hi[i].stt,hi[i].ten,hi[i].ngaysinh,hi[i].tc);
	}
}


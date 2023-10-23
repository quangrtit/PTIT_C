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
	struct sv o1[n];
	for(int i = 0 ; i < n ; i ++){
		gets(o1[i].ten);
		scanf("%s",o1[i].ngaysinh);
		scanf("%f %f %f",&o1[i].diem1,&o1[i].diem2,&o1[i].diem3);
		o1[i].tc = o1[i].diem1 + o1[i].diem2 + o1[i].diem3;
		o1[i].stt = i+1;
		getchar();
	}
	// tim thu khoa
	for(int i = 0; i < n-1 ; i ++){
		for(int j = i + 1;j < n ; j ++ ){
			if(o1[i].tc < o1[j].tc){
				// hoan doi tdiem
				float x = o1[i].tc;
				o1[i].tc = o1[j].tc;
				o1[j].tc = x;
				// hoan doi vi tri
				int x1 = o1[i].stt;
				o1[i].stt = o1[j].stt;
				o1[j].stt = x1;
				// hoan doi ten
				char x2[1000];
				strcpy(x2,o1[i].ten);
				strcpy(o1[i].ten,o1[j].ten);
				strcpy(o1[j].ten,x2);
				//hoan doi nhom_mh
				char x11[1000];
				strcpy(x11,o1[i].ngaysinh);
				strcpy(o1[i].ngaysinh,o1[j].ngaysinh);
				strcpy(o1[j].ngaysinh,x11);
			}
		}
	}
	for(int i = 0 ; i < n ;i ++){
		printf("%d %s %s %.1f\n",o1[i].stt,o1[i].ten,o1[i].ngaysinh,o1[i].tc);
	}
}


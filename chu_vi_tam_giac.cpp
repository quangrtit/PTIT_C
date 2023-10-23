#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		float a[6];
		for(int i = 0 ; i < 6 ; i ++){
			scanf("%f",&a[i]);
		}
		float c1 = sqrt((a[2] - a[0])*(a[2] - a[0]) + (a[3] - a[1]) * (a[3] - a[1]));
		float c2 = sqrt((a[2] - a[4])*(a[2] - a[4]) + (a[3] - a[5]) * (a[3] - a[5]));
		float c3 = sqrt((a[0] - a[4])*(a[0] - a[4]) + (a[1] - a[5]) * (a[1] - a[5]));
		float cv = c1 + c2 + c3;
		if(c1+c2 > c3 && c2 + c3 > c1 && c1  + c3 > c2 && c1 * c2 !=0 && c1 *c3 != 0){
			printf("%.3f\n",cv);
		}
		else{
			printf("INVALID\n");
		}
	}
}

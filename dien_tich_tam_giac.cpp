#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		double a[6];
		for(int i = 0 ; i < 6 ; i ++){
			scanf("%lf",&a[i]);
		}
		double c1 = sqrt((a[2] - a[0])*(a[2] - a[0]) + (a[3] - a[1]) * (a[3] - a[1]));
		double c2 = sqrt((a[2] - a[4])*(a[2] - a[4]) + (a[3] - a[5]) * (a[3] - a[5]));
		double c3 = sqrt((a[0] - a[4])*(a[0] - a[4]) + (a[1] - a[5]) * (a[1] - a[5]));
		double cv = sqrt((c1+c2+c3)*(c1+c2-c3)*(c2+c3-c1)*(c1+c3-c2))/4;
		if(c1+c2 > c3 && c2 + c3 > c1 && c1  + c3 > c2 && c1 * c2 !=0 && c1 *c3 != 0){
			printf("%0.2lf\n",cv);
		}
		else{
			printf("INVALID\n");
		}
	}
}

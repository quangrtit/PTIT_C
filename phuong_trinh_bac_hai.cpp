#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;scanf("%f %f %f", &a, &b, &c);
	if(a == 0){
		if(b == 0){
			printf("NO");
		}
		else{
			double x = -c/b;
			if(x == 0){
				printf("%.2f", 0.00);
			}
			else{
				printf("%.2f", -c/b);
			}
		}
	}
	else{
		double denta = b*b - 4*a*c;
		double x1 = (-b - sqrt(denta))/(2*a*1.0);
		double x2 = (-b + sqrt(denta))/(2*a*1.0);
		if(denta > 0){
			if(x1 != 0 && x2 != 0){
				if(x1 < x2){
					printf("%.2f %.2f", x1, x2);
					
				}
				else{
					printf("%.2f %.2f", x2, x1);
				}
			
			}
			else if(x1 == 0 && x2 != 0){
				printf("%.2f", 0.00);
				printf("%.2f", x2);
			}
			else if(x1 != 0 && x2 == 0){
				printf("%.2f", x1);
				printf("%.2f", 0.00);
			}
			
		}
		else if(denta == 0){
			if(x1 == 0){
				printf("%.2f", 0.00);
			}
			else{
				printf("%.2f", (-b - sqrt(denta))/(2*a*1.0));
			}
		}
		else{
			printf("NO");
		}
	}
}

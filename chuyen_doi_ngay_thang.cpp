#include<stdio.h>
int main(){
	long long day;scanf("%lld", &day);
	printf("%lld %lld %lld", day/365, (day%365)/7, ((day%365)%7));
}

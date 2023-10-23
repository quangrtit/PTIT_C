#include<iostream>
#include<time.h>
using namespace std;

long long tinhtong(int n)
{
	if(n == 1) return 1;
	if(n == 2) return 1;
	return tinhtong(n - 1) + tinhtong(n - 2);
}
int main()
{
	int t; scanf("%d", &t);
	while(t--)
	{
		int n; scanf("%d", &n);
		clock_t ct1 = clock();
		printf("%lld\n", tinhtong(n));
		clock_t ct2 = clock();
		printf("%.20lf\n", (double)(ct2 - ct1)/CLOCKS_PER_SEC);
	}
}

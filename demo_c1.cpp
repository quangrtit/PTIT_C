#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	double x[n + 1], y[n + 1];
	for(int i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	for(int i = 1; i <= n; i++)
	{
		cin >> y[i];
	}
	double p_a = 0;
	for(int i = 1; i <= n; i++)
	{
		p_a += sin(2*x[i]);
	}
	cout << setprecision(3) << fixed << p_a/2 << endl; 
	double p_b = 0;
	for(int i = 1; i <= n; i++)
	{
		p_b += (x[i] - y[i]) * (x[i] - y[i]);
	}
	cout << setprecision(3) << fixed << sqrt(p_b) << endl;
	double p_c = 0;

	for(int i = 1; i <= n - 1; i++)
	{
		p_c += pow(x[2], i + 1) * y[i + 1];
	}
	cout << setprecision(3) << fixed << p_c << endl;
}

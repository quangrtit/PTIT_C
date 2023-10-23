#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}
int lcm(int a, int b)
{
	return a * b/gcd(a,b);
}
struct phanso{
	int tu;
	int mau;
};
void rutgon(struct phanso *a)
{
	int uoc = gcd(a->tu, a->mau);
	a->tu = a->tu / uoc;
	a->mau = a->mau / uoc;
	if(a->mau < 0)
	{
		a->tu *= -1;
		a->mau *= -1;
	}
}
struct phanso tong(struct phanso a, struct phanso b)
{
	struct phanso c;
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
	rutgon(&c);
	return c;
}
struct phanso hieu(struct phanso a, struct phanso b)
{
	struct phanso c;
	c.tu = a.tu * b.mau - a.mau * b.tu;
	c.mau = a.mau * b.mau;
	rutgon(&c);
	return c;
}
void solve()
{
	struct phanso a, b;
	scanf("%d", &a.tu);
	scanf("%d", &a.mau);
	scanf("%d", &b.tu);
	scanf("%d", &b.mau);
	rutgon(&a);
	rutgon(&b);
	printf("%d/%d\n", a.tu, a.mau);
	printf("%d/%d\n", b.tu, b.mau);
	struct phanso c = tong(a, b);
	printf("%d/%d\n", c.tu, c.mau);
	struct phanso d = hieu(a, b);
	printf("%d/%d\n", d.tu, d.mau);
}
int main()
{
	solve();
}

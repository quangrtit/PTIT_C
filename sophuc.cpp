#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct sophuc{
	int virtuals;
	int reals;
};
struct sophuc tong(struct sophuc a, struct sophuc b, int e)
{
	struct sophuc c;
	c.reals = a.reals + e * b.reals;
	c.virtuals = a.virtuals + e * b.virtuals;
	return c;
}
struct sophuc nhan(struct sophuc a, struct sophuc b)
{
	struct sophuc e;
	e.reals = a.reals * b.reals - b.virtuals * a.virtuals;
	e.virtuals = a.reals * b.virtuals + a.virtuals * b.reals;
	return e;
}
void xuat(struct sophuc a)
{
	printf("%d %d\n", a.reals, a.virtuals);
}
void nhap(struct sophuc *a)
{
	scanf("%d %d", &a->reals, &a->virtuals);
}
void solve()
{
	struct sophuc a, b;
	nhap(&a);
	nhap(&b);
	struct sophuc c = tong(a, b, 1);
	xuat(c);
	struct sophuc d = tong(a, b, - 1);
	xuat(d);
	struct sophuc e = nhan(a, b);
	xuat(e);
}
int main()
{
	solve();
}

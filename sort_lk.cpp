#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node* nodex;

int cmp1(nodex a, nodex b)
{
	return a->data <= b->data;
}
int cmp2(nodex a, nodex b)
{
	return a->data >= b->data;
}
nodex makenode(int x)
{
	nodex tmp = (nodex)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

void push(nodex *a, int x)
{
	nodex tmp = makenode(x);
	if(*a == NULL)
	{
		*a = tmp; return;
	}
	nodex pp = *a;
	while(pp->next != NULL)
	{
		pp = pp->next;
	}
	pp->next = tmp;
}
void sort_lk(nodex *a , int (*cmp)(nodex, nodex))
{
	nodex pp = *a;
	while(pp->next != NULL)
	{
		nodex px = pp;
		while(px != NULL)
		{
			if(cmp(pp, px))
			{
				int txm = pp->data;
				pp->data = px->data;
				px->data = txm;
			}
			px = px->next;
		}
		pp = pp->next;
	}
}
void in(nodex a)
{
	while(a != NULL)
	{
		printf("%d ", a->data); a = a->next;
	}
	printf("\n");
}
void solve()
{
	int n; scanf("%d", &n);
	nodex ab = NULL;
	for(int i = 0; i < n; i++)
	{
		int ok; scanf("%d", &ok);
		push(&ab, ok);
	}
	sort_lk(&ab, cmp2);
	in(ab);
	sort_lk(&ab, cmp1);
	in(ab);
}

int main()
{
	solve();
}

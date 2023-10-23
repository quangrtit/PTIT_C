#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node* nodez;

nodez makenode(int x)
{
	nodez tmp = (nodez)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
void insert_last(nodez *a, int x)
{
	nodez p = makenode(x);
	if(*a == NULL)
	{
		*a = p; return;
	}
	nodez pp = *a;
	while(pp->next != NULL)
	{
		pp = pp->next;
	}
	pp->next = p;
}

void in(nodez a)
{
	if(a == NULL)
	{
		printf("EMPTY\n"); return;
	}
	while(a != NULL)
	{
		printf("%d ", a->data); a = a->next;
	}
	printf("\n");
}
void xoa(nodez *a, int x)
{
	nodez pp = NULL;
	while((*a) != NULL)
	{
		if((*a)->data != x)
		{
			insert_last(&pp, (*a)->data);
		}
		(*a) = (*a)->next;
	}
	(*a) = pp;
}
void solve()
{
	int n, x; scanf("%d %d", &n, &x);
	int tmpx;
	nodez abc = NULL;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &tmpx);
		insert_last(&abc, tmpx);
	}
	xoa(&abc, x);
	if(abc == NULL)
	{
		printf("EMPTY\n"); return;
	}
	in(abc);
}
int main()
{
	solve();
}

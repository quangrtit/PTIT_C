#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node* nodex;

nodex makenode(int x)
{
	nodex pp = (nodex)malloc(sizeof(struct node));
	pp->data = x;
	pp->next = NULL;
	return pp;
}
void push(nodex *a, int x)
{
	nodex tmp = makenode(x);
	if((*a) == NULL)
	{
		(*a) = tmp; return;
	}
	nodex pp = (*a);
	while(pp->next != NULL)
	{
		pp = pp->next;
	}
	pp->next = tmp;
}
void front(nodex a)
{
	if(a == NULL)
	{
		printf("EMPTY\n"); return;
	}
	printf("%d\n", a->data);
}
void pop(nodex *a)
{
	if(*a == NULL)
	{
		return;
	}
	*a = (*a)->next;
}
void in(nodex a)
{
	if(a == NULL)
	{
		printf("empty\n"); return;
	}
	while(a != NULL)
	{
		printf("%d\n", a->data); a = a->next;
	}
}
void solve()
{
	int n; scanf("%d", &n);
	nodex ab = NULL;
	while(n--)
	{
		char ok[105]; scanf("%s", ok);
		if(strcmp(ok, "push") == 0)
		{
			int cnt; scanf("%d", &cnt);
			push(&ab, cnt);
		}
		else if(strcmp(ok, "pop") == 0)
		{
			pop(&ab);
		}
		else if(strcmp(ok, "front") == 0)
		{
			front(ab);
		}
	}
}
int main()
{
	solve();
}

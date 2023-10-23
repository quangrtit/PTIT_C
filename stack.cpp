#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node* nodef;

nodef makenode(int x)
{
	nodef pp = (nodef)malloc(sizeof(struct node));
	pp->data = x;
	pp->next = NULL;
	return pp;
}

void push(nodef *a, int x)
{
	nodef pp = makenode(x);
	if((*a) == NULL)
	{
		(*a) = pp; return;
	}
	pp->next = (*a);
	(*a) = pp;
}
void pop(nodef *a)
{
	if((*a) == NULL)
	{
		return;
	}
	(*a) = (*a)->next;
}
void show(nodef a)
{
	if(a == NULL)
	{
		printf("EMPTY\n\n"); return;
	}
	while(a != NULL)
	{
		printf("%d ", a->data); a = a->next;
	}
	printf("\n");
	
}
void solve()
{
	int n; scanf("%d", &n);
	nodef abs = NULL;
	while(n--)
	{
		char ok[105]; scanf("%s", ok);
		if(strcmp(ok, "pop") == 0)
		{
			pop(&abs);
		}
		else if(strcmp(ok, "push") == 0)
		{
			int xy; scanf("%d", &xy);
			push(&abs, xy);
		}
		else if(strcmp(ok, "show") == 0)
		{
			show(abs);
		}
	}
}
int main()
{
	solve();
	
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct tu{
	char ktu[25];
	int sl;
};
struct node{
	struct tu data;
	struct node* next; 
};
typedef struct node* nodex;

nodex makenode(struct tu x)
{
	nodex tmp = (nodex)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
void insert_last(nodex *a, struct tu x)
{
	nodex p = makenode(x);
	if(*a == NULL)
	{
		*a = p; return;
	}
	nodex pp = *a;
	while(pp->next != NULL)
	{
		pp = pp->next;
	}
	pp->next = p;
}
void push(nodex *a)
{
	if(*a == NULL) return;
	nodex p = *a;
	while(p->next != NULL)
	{
		nodex pp = p->next;
		nodex pp1 = p;
		while(pp != NULL)
		{
			if(strcmp(p->data.ktu, pp->data.ktu) == 0)
			{
				p->data.sl ++;
				pp1->next = pp->next;
				pp = pp1->next;
			}
			else
			{
				pp = pp->next;
				pp1 = pp1->next;
			}
		}
		p = p->next;
	}
}
void in(nodex a)
{
	if(a == NULL)
	{
		return;
	}
	while(a != NULL)
	{
		printf("%s %d\n", a->data.ktu, a->data.sl);
		a = a->next;
	}
}
void solve()
{
	struct tu s;  
	nodex ab = NULL;
	while(scanf("%s", s.ktu) != EOF)
	{
		s.sl = 0;
		insert_last(&ab, s);
	}
	push(&ab);
	in(ab);
	
}
int main()
{
	solve();	
}

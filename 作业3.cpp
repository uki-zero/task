#include<iostream>
using namespace std;
typedef struct node
{
	int value;
	node* next;
}node;
node* creatlist(int a[], int m)
{
	node* phead = new node;
	node* p = phead;
	for (int i = 0; i <= m - 1; i++)
	{
		node* ptemp = new node;
		ptemp->value = a[i];
		ptemp->next = NULL;
		p->next = ptemp;
		p = ptemp;
	}
	return phead;
}
void printls(node* phead)
{
	node* p = phead;
	p = p->next;
	while (p != NULL)
	{
		cout << p->value << endl;
		p = p->next;
	}
}
node* mergels(node* phead1, node* phead2)
{
	node* p1 = phead1;
	node* p2 = phead2;
	p1 = p1->next;
	p2 = p2->next;
	node* phead3 = new node;
	node* p3 = phead3;
	while (p1 != NULL && p2 != NULL)
	{
		node* ptemp = new node;
		if (p1->value <p2->value)
		{
			p3->value = p1->value;
			p1 = p1->next;
		}
		else
		{
			p3->value = p2->value;
			p2 = p2->next;
		}
		p3->next = ptemp;
		p3 = ptemp;
		ptemp->next = NULL;
		
	}
	if (p1 == NULL|| p2 == NULL)
	{
		for(;p2!=NULL;p2=p2->next)
		{
			node* ptemp = new node;
			ptemp->value = p2->value;
			p3->next = ptemp;
			p3 = ptemp;
			ptemp->next=NULL;

		}
		for (; p1 != NULL; p1 = p1->next)
		{
			node* ptemp = new node;
			ptemp->value = p1->value;
			p3->next = ptemp;
			p3 = ptemp;
			ptemp->next=NULL;

		}
	}
	return phead3;
}
int main()
{
	int a[4] = { 1,2,3,4 };
	int b[3] = { 5,6,8 };
	node* p1 = creatlist(a, 4);
	node* p2 = creatlist(b, 3);
	printls(mergels(p1, p2));
	return 0;
} 
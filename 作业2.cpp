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
int main()
{
	int a[8] = { 1,2,3,4,5,6,8,7 };
	printls(creatlist(a, 8));
	return 0;
}
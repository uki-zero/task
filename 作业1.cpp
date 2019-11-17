#include<iostream>
using namespace std;
void mergeab(int a[],int b[],int m, int n)
{
	int tempm = m - 1;
	int tempn = n - 1;
	int i = m + n - 1;
	while (tempm >= 0 && tempn >= 0)
	{
		if (a[tempm] > b[tempn])
		{
			a[i] = a[tempm];
			tempm--;
		}
		else
		{
			a[i] = b[tempn];
			tempn--;
		}i--;
	}
	while (tempm >= 0)
	{
		a[i] = a[tempm];
		tempm--;
		i--;
	}
}
int main()
{
	int a[8] = { 1,3,4,6,7,8 };
	int b[2] = { 10,19 };
	mergeab(a, b, 6, 2);
	for (int i = 0; i <= 7; i++)
		cout << a[i] << endl;
	return 0;
}
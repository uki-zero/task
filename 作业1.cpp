#include<iostream>
#include<iomanip>
using namespace std;
void mergearry(int a[], int m, int b[], int n)
{
	int i = m - 1;
	int j = n - 1;
	int s = m + n - 1;
	while (i >=0 && j >= 0)
	{
		if (a[i] >= b[j])
			a[s--] = a[i--];
		else
			a[s--] = b[j--];
	}
	while (i >= 0)
		a[s--] = a[i--];
}
int main()
{
	int a[8] = { 2,5,6,7,9 };
	int b[3] = { 3,10,99 };
	mergearry(a, 5, b, 3);
	for (int i = 0; i <= 7; i++)
		cout << a[i] << endl;
	return 0;
}
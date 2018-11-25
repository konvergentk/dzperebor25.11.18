/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *x = new int[n + 1];
	int *y = new int[n + 1];
	for (int i = 0; i <= n; i++)
		x[i] = i;
	for (int i = 0; i <= n; i++)
		y[i] = 0;

	for (int q = 2; q <= n; q++)
	{
		if (x[q] != 0)
		{
			for (int j = q + q; j <= n; j += q)
			{
				x[j] = 0;
				y[j] = j;
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (y[i] != 0)
		{
			cout << y[i] << " ";
		}
	}
	return 0;
}

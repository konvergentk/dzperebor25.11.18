/*Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k. В комментариях напишите, почему перебор - эффективный
*/

#include <iostream>
using namespace std;
void output(int *a, int b, int c)
{
	for (int i = 0; i < b; i++)
	{
		int m = 1, q = a[i];
		while (a[i] >= 1)
		{
			if ((a[i] % 10) != 0)
			{
				m *= (a[i] % 10);
			}
			if (m > c)
			{
				cout << q << " ";
				break;

			}
			a[i] /= 10;
		}
	}
}
int main() {
	int n, k;
	cin >> n, >> k;
	int *array = new int[N];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	return 0;
}

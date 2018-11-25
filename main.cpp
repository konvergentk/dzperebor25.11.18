/*Напишите переборную программу программу, вычисляющую значение функции Эйлера для числа n.
Программа должна работать не более чем за O(n* log n) шагов.*/


#include <iostream>
#include <string>
using namespace std;
  int gospodi (int k)
  {
    int result = k;
    for (int i = 2; i * i <= k; ++i)
        if (k % i == 0)
        {
            while (k % i == 0)
                k /= i;
result -= result / i;
}
if (k > 1)
result -= result / k;
return result;
}

  int main() {
    int n;
    cin >> n;
    cout << gospodi(n);
    return 0;
}

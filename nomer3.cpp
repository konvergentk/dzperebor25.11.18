/*Íàïèøèòå ïåðåáîðíóþ ïðîãðàììó ïðîãðàììó, âû÷èñëÿþùóþ çíà÷åíèå ôóíêöèè Ýéëåðà äëÿ ÷èñëà n.
Ïðîãðàììà äîëæíà ðàáîòàòü íå áîëåå ÷åì çà O(n* log n) øàãîâ.*/


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

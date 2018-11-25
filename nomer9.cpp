/*Íàïèøèòå ïðîãðàììó, íàõîäÿùóþ âñå ïðîñòûå ÷èñëà Ñîôè Æåðìåí íå ïðåâîñõîäÿùèå n.
 Ïðîãðàììà äîëæíà ðàáîòàòü íå áîëåå ÷åì çà O(n*log log n) øàãîâ.
*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool lol(int n){
    int i = 2, k = 0;
    k = sqrt(n);
    while (((n % i) != 0) && (i <= k))
    {
        i++;

    }
     return i > k;
}
    int main ()
    {
        int i, n, m = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            if (lol(i) && lol(i * 2 + 1) )
            {
                cout << i <<' ';
                m = 1;
            }
        }
        if (m == 0)
            cout << m;
        return 0;
    }

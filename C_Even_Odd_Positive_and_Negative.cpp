#include <iostream>
using namespace std;

void CountNumber(int n)
{
    int s;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s > 0)
        {
            positive++;
        }
        else if ((s < 0) && (s != 0))
        {
            negative++;
        }
        if (s % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}
int main()
{
    int n;

    if (!(cin >> n))
        return 0;

    CountNumber(n);
  
}
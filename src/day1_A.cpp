#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int prev = num;
    int cnt = 0;
    while (cin >> num)
    {
        cnt += (num > prev) ? 1 : 0;
        prev = num;
    }
    cout << cnt << endl;
    return 0;
}
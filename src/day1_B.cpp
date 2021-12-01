#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int sum = n1 + n2 + n3;
    int num;
    int cnt = 0;
    int prev = sum;
    while (cin >> num)
    {
        sum += num;
        sum -= n1;
        cnt += (sum > prev) ? 1 : 0;
        prev = sum;
        n1 = n2;
        n2 = n3;
        n3 = num;
    }
    cout << cnt << endl;
    return 0;
}
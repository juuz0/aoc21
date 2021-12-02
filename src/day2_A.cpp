#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    int num;
    int horz = 0, dep = 0;
    while (cin >> ss >> num)
    {
        if (ss == "forward")
            horz += num;
        else if (ss == "down")
            dep += num;
        else
            dep -= num;
    }
    cout << horz * dep << endl;
    return 0;
}
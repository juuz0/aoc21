#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ss;
    int num;
    int horz = 0, dep = 0, aim = 0;
    while (cin >> ss >> num)
    {
        if (ss == "forward")
        {
            horz += num;
            dep += aim * num;
        }
        else if (ss == "down")
            aim += num;
        else
            aim -= num;
    }
    cout << horz * dep << endl;
    return 0;
}
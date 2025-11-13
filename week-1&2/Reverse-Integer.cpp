// Reverse Integer
#include <iostream>
using namespace std;

int main()
{
    int x = -123;

    int ans = 0;
    bool isNegative = false;

    if (x <= INT_MIN)
    {
        return 0;
    }

    if (x < 0)
    {
        x = -x;
        isNegative = true;
    }

    while (x > 0)
    {
        if (ans > INT_MAX / 10)
        {
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }

    if (isNegative)
    {
        ans = -ans;
    }

    cout << "Reversed Integer: " << ans << endl;

    return 0;
}

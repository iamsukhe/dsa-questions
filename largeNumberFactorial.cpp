#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int num = 100;

    vector<int> ans;
    ans.push_back(1);

    int carry = 0;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }

        carry = 0;
    }

    reverse(ans.begin(), ans.end());

    for (int j = 0; j < ans.size(); j++)
    {
        cout << ans[j] << "";
    }

    return 0;
}
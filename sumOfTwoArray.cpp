#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int arr1[] = {0, 9, 0, 0, 3, 5};
    int arr2[] = {2, 2, 7};

    string ans;

    int i = 6 - 1;
    int j = 3 - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int x = arr1[i] + arr2[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = arr1[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }

    while (j >= 0)
    {
        int x = 0 + arr2[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry);
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i] << ' ';
    }

    return 0;
}
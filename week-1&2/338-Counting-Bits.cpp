// Counting Bits
// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 5;
    vector<int> ans;

    for (int i = 0; i <= num; i++)
    {
        int count = 0;
        int n = i;
        while (n > 0)
        {
            count += (n & 1);
            n = n >> 1;
        }

        ans.push_back(count);
    }

    return 0;
}

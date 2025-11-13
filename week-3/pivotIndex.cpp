// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int n = nums.size();
    vector<int> rSum(n);
    vector<int> lSum(n);

    rSum[0] = nums[0];
    lSum[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++)
    {
        rSum[i] = rSum[i - 1] + nums[i];
    }

    for (int i = n - 2; i >= 0; i--)
    {

        lSum[i] = lSum[i + 1] + nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        // cout <<rSum[i]<< endl;
        // cout <<lSum[i]<< endl;
        if (rSum[i] == lSum[i])
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

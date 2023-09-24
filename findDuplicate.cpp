#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 287. Find the Duplicate Number
    vector<int> nums = {1, 3, 4, 2, 2};

    int ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i])] < 0)
        {
            ans = abs(nums[i]);
            break;
        }
        nums[abs(nums[i])] = -nums[abs(nums[i])];
    }

    cout << "Ans: ";
    cout << ans;

    return 0;
}
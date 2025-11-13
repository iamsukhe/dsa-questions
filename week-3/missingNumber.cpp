// Input: nums = [3,0,1]

// Output: 2

// Explanation:

// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 0, 1};
    int lenght = nums.size();

    int totalSum = (lenght * (lenght + 1)) / 2;

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        sum = sum + nums[i];
    }

    int ans = totalSum - sum;
    cout << "Missing number is: " << ans << endl;

    return 0;
}

// Input: nums = [2,2,1]
// Output: 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int ans = 0;
    vector<int> nums = {4, 1, 2, 1, 2};

    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    cout << "Single Number: " << ans << endl;

    return 0;
}

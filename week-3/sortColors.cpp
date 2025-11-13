// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int start = 0;
    int end = nums.size() - 1;
    int index = 0;

    while (index <= end)
    {

        if (nums[index] == 0)
        {
            swap(nums[index], nums[start]);
            start++;
            index++;
        }
        else if (nums[index] == 1)
        {
            index++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[end]);
            end--;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

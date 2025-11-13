// Input: arr[] = [4, 3, 6, 2, 1, 1]
// Output: [1, 5]
// Explanation: Repeating number is 1 and the missing number is 5.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    // code here
    vector<int> ans(2);

    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index - 1] < 0)
        {
            ans[0] = index;
        }

        if (arr[index - 1] > 0)
        {
            arr[index - 1] = -arr[index - 1];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            ans[1] = i + 1;
            break;
        }
    }

    cout << "Repeating number is: " << ans[0] << ", Missing number is: " << ans[1] << endl;

    return 0;
}

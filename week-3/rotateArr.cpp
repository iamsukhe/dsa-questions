// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    d = d % arr.size();

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());

    reverse(arr.begin(), arr.end());

    cout << "Array after rotation: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

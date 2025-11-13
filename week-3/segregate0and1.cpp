// Input: arr[] = [0, 0, 1, 1, 0]
// Output: [0, 0, 0, 1, 1]
// Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 1, 1].
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0, 1, 0, 1, 0, 1, 1, 0};
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        while (arr[start] == 0)
        {
            start++;
        }
        while (arr[end] == 1)
        {
            end--;
        }

        if (start < end && arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    cout << "Array after segregation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

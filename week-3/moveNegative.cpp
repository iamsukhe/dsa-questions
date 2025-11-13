// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = arr.size();
    int i = 0;
    int j = 1;

    while (j < n)
    {
        if (arr[i] < 0)
        {
            i++;
            j++;
        }
        else if (arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << "Array after moving negative: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

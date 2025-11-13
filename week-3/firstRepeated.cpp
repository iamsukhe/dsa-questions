// Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
// Output: 2
// Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    unordered_map<int, int> hash;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            cout << "First repeated element is: " << arr[i] << endl;
            break;
        }
    }

    return 0;
}

// Input: mat = [[0,1],[1,0]]
// Output: [0,1]
// Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1].

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    int row = mat.size();
    int col = mat[0].size();

    int oneCount = INT_MIN;
    int rowNo = -1;
    vector<int> ans;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 1)
            {
                sum = sum + 1;
            }
        }

        if (sum > oneCount)
        {
            oneCount = sum;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);

    cout << "Row with maximum ones: [" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}

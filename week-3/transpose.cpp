// Input: mat[][] = [[1, 1, 1, 1],
//                 [2, 2, 2, 2],
//                 [3, 3, 3, 3],
//                 [4, 4, 4, 4]]
// Output: [[1, 2, 3, 4],
//        [1, 2, 3, 4],
//        [1, 2, 3, 4],
//        [1, 2, 3, 4]]
// Explanation: Converting rows into columns and columns into rows.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<vector<int>> mat = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}};

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i; j < mat[i].size(); j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

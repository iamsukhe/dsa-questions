// set the Kth bit of a number
// Input: n = 10, k = 2
// Output: 14
// Explanation: Binary representation of the given number 10 is: 1 0 1 0, number of bits in the binary reprsentation is 4. Thus 2nd bit from right is 0. The number after changing this bit to 1 is: 14(1 1 1 0).
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int k = 2;

    int ans = n | (1 << k);

    cout << "Number after setting " << k << "th bit is: " << ans << endl;
    return 0;
}

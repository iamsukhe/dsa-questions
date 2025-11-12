// Count the number of set bits in an integer
#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int count = 0;

    while (n > 0)
    {
        count += (n & 1);
        n = n >> 1;
    }

    cout << "Number of set bits: " << count << endl;

    return 0;
}

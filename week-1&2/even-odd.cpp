// Program to check if a number is even or odd using bitwise operator
#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    // Using modulus operator
    // n % 2 == 1  -> Odd
    // n % 2 == 0  -> Even

    // Using bitwise AND operator
    if (num & 1)
        cout << num << " is Odd" << endl;
    else
        cout << num << " is Even" << endl;

    return 0;
}

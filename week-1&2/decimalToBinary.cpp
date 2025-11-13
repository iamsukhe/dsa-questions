// Convert Decimal Number to Binary Number
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int decimalNumber = 10; // Example decimal number
    int binrayNumber = 0;
    int i = 0;

    while (decimalNumber > 0)
    {
        int bit = decimalNumber & 1;
        binrayNumber = bit * pow(10, i++) + binrayNumber;
        decimalNumber = decimalNumber >> 1;
    }

    cout << "Binary Number of Given Number: " << binrayNumber << endl;

    return 0;
}

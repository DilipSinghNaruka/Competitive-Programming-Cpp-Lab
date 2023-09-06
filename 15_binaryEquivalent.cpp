#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;
    string binary_number = "";

    while (decimal_number != 0)
    {
        int remainder = decimal_number % 2;

        binary_number = to_string(remainder) + binary_number;

        decimal_number = decimal_number / 2;
    }

    reverse(binary_number.begin(), binary_number.end());

    cout << "The binary equivalent of the decimal number is: " << binary_number << endl;

    return 0;
}
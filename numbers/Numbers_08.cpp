#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Addition of two binary numbers

/*
    Solution approach:
    There will be 3 cases:

    case#1
        two digits are 0:
            ans: 0, if no previous carry
            ans: 1, if previous carry

    case#2
        one is 0 and another is 1:
            ans: 0, carry 1, if previous carry exists
            ans: 1, no cary, if no previous carry
    case#3
        both are 1:
            ans:0, carry 1, if no previous carry
            ans:1, carry 1, if previous carry
*/

string addBinary(string x, string y) {

    string result;

    int xlen = x.length() - 1;
    int ylen = y.length() - 1;
    int carry = 0;

    while(xlen >= 0 || ylen >= 0)
    {
        int sum = carry;

        if(xlen >= 0)
        {
            sum += x[xlen--] - '0';
            cout << "xlen sum: " << sum << endl;
        }

        if(ylen >= 0)
        {
            sum += y[ylen--] - '0';
            cout << "ylen sum: " << sum << endl;
        }

        carry = sum > 1 ? 1 : 0;
        cout << "carry: " << carry << endl;
        result += to_string(sum % 2);
        cout << "result: " << result << endl;
        cout << "----------------------" << endl;
    }

    if(carry) result += to_string(carry);
    reverse(result.begin(), result.end());
    return result;

}

int main() {

    string a, b;
    cout << "Enter first binary number: ";
    cin >> a;

    cout << "Enter second binary number: ";
    cin >> b;

    cout << addBinary(a, b) << endl;
    return 0;
}


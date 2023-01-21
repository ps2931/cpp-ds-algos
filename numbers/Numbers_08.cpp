#include <iostream>
#include <string>
#include <algorithm>


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

std::string addBinary(std::string x, std::string y) {

    std::string result;

    int xlen = x.length() - 1;
    int ylen = y.length() - 1;
    int carry = 0;

    while(xlen >= 0 || ylen >= 0)
    {
        int sum = carry;

        if(xlen >= 0)
        {
            sum += x[xlen--] - '0';
            std::cout << "xlen sum: " << sum << std::endl;
        }

        if(ylen >= 0)
        {
            sum += y[ylen--] - '0';
            std::cout << "ylen sum: " << sum << std::endl;
        }

        carry = sum > 1 ? 1 : 0;
        std::cout << "carry: " << carry << std::endl;
        result += std::to_string(sum % 2);
        std::cout << "result: " << result << std::endl;
        std::cout << "----------------------" << std::endl;
    }

    if(carry) result += std::to_string(carry);
    reverse(result.begin(), result.end());
    return result;

}

void add_binary_numbers(long bn1, long bn2) {
    int i=0, r=0;
    int sum[20];

    while (bn1 != 0 || bn2 != 0) {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0) {
        sum[i++] = r;
    }
    --i;
    std::cout<<" The sum of two binary numbers is: ";
    while (i >= 0) {
        std::cout<<(sum[i--]);
    }
    std::cout<<("\n");
}

int main() {

    std::string a, b;
    std::cout << "Enter first binary number: ";
    std::cin >> a;

    std::cout << "Enter second binary number: ";
    std::cin >> b;

    std::cout << addBinary(a, b) << std::endl;

    add_binary_numbers(std::stol(a), std::stol(b));
    return 0;
}


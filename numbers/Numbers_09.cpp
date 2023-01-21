#include <bits/stdc++.h>

int binaryToDecimal(int n) {

    std::cout << "Binary: " << n << std::endl;

    int ans = 0;
    int x = 1; // 2^0 2^1 2^3

    while(n>0) {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}


int octalToDecimal(int n) {

    std::cout << "Octal: " << n << std::endl;

    int ans = 0;
    int x = 1; // 2^0 2^1 2^3

    while(n>0) {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(std::string n) {
    std::cout << "Hexadecimal: " << n << std::endl;

    int ans = 0;
    int x = 1;

    int s = n.size();

    for (int i=s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {

            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

void decimalToBinary(int n) {
    int arr[11], i = 0, num = n;

    // Until the value of n becomes 0.
    while(n != 0){
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }
    std::cout << num << " in Binary is ";

    // Printing the array in Reversed Order.
    for(i = i - 1; i >= 0;i--){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

void decimalToOctal(int n) {
    int arr[11], i = 0, num = n;

    // Until the value of n becomes 0.
    while(n != 0){
        arr[i] = n % 8;
        i++;
        n /= 8;
    }
    std::cout << num << " in Octal is ";

    // Printing the array in Reversed Order.
    for(i = i - 1; i >= 0;i--){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

std::string decimalToHexadecimal(int n) {
    std::string ans = "";

    while(n != 0) {
        // remainder variable to store remainder
        int rem = 0;

        // ch variable to store each character
        char ch;

        // storing remainder in rem variable
        rem = n % 16;

        // check if temp < 10
        if(rem < 10) {
            ch = rem + 48;
        } else {
            ch = rem + 55;
        }

        // updating the ans string with the character variable
        ans += ch;
        n = n / 16;
    }

    // reversing the ans string to get the final result
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
        std::swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

int main() {

    std::cout << binaryToDecimal(10111) << std::endl;
    std::cout << octalToDecimal(17) << std::endl;
    std::cout << hexadecimalToDecimal("1CF") << std::endl;

    decimalToBinary(156);
    std::cout << "\n";

    decimalToOctal(33);
    std::cout << "\n";

    std::cout << decimalToHexadecimal(2545) << std::endl;

    return 0;
}


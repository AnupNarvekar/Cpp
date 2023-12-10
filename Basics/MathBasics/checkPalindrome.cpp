#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    int numCopy = num;
    int rev = 1;
    while (num != 0) {
        int lastDigit = num % 10;
        num = num / 10;
        rev = rev * 10 + lastDigit;
    }

    return rev == numCopy ? true : false;
}

int main() {
    int n = 121;
    isPalindrome(n) ? cout << n << " is a Palindrome" << endl
                    : cout << n << " is Not a Palindrome" << endl;
}
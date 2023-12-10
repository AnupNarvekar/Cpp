#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 1;
    while (num != 0) {
        int lastDigit = num % 10;
        num = num / 10;
        rev = rev * 10 + lastDigit;
    }
    cout << rev << endl;
    return rev;
}

int main() { 
    int n = 12345;
    cout << "Reverse of " << n << " is " << reverseNumber(n) << endl;
}
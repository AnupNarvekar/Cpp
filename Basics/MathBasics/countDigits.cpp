#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;

    for (int i = 0; num != -1; i++) {
        count++;
        num = (int)num / 10;

        if (num == 0) {
            num = -1;
        }
    }

    return count;
}

int main() {
    try {
        int n = 12345;
        cout << "count: " << countDigits(n) << endl;

    } catch (const exception& e) {
        cerr << e.what() << '\n';
    }
}
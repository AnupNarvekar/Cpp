#include <iostream>
using namespace std;

// Pattern 1
void p1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*  ";
        }

        cout << "\n";
    }
}

// Pattern 2
void p2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*  ";
        }

        cout << "\n";
    }
}

// Pattern 3
void p3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }

        cout << "\n";
    }
}

// Pattern 4
void p4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }

        cout << "\n";
    }
}

// Pattern 5
void p5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }

        cout << "\n";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n-1; j >= i; j--)
    //     {
    //         cout << "* ";
    //     }

    //     cout << "\n";
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; i + j < n; j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
}

// Pattern 6
void p6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1;
        }

        cout << "\n";
    }
}

int main() {
    int n = 5;
    p6(n);
}
#include <iostream>
using namespace std;

// Function signature
// Function's return type + name + Parameter list (including qualifiers (const)
// and the order of parameters)

void doSomething() { cout << "I'm doing something" << endl; }

void doSomething(int n) { cout << "I'm doing something with " << n << endl; }

void doSomething(int* n) {
    cout << "I'm doing something with " << *n << " via a pointer" << endl;
}

void doSomething(int n, int m) {
    cout << "I'm doing something with " << n << " and " << m << endl;
}

int main() {
    int x = 5;

    doSomething();
    doSomething(1);
    doSomething(&x);
    doSomething(2, 3);

}
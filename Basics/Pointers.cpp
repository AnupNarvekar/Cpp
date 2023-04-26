#include<iostream>
using namespace std;

// Pass argument by value (copy of original variables)
int addByValue(int x, int y){
    return x + y;
};

// Pass argument by reference using pointer variables
int addByReference_pointer (int* x, int* y){
    return *x + *y;
};

// Pass arguments by reference using referance variables
int addByReference_reference(int& x, int& y){
    return x + y;
};

int main(){
    int a = 5;
    int b = 10;

    // Declare and initialize pointer variables
    int* aPtr = &a; // aPtr <-- address of a
    int* bPtr = &b; // bPtr <-- address of b

    cout << "a + b by val: " << addByValue(a, b) << endl; // 15
    cout << "a + b by ref -> pointer: " << addByReference_pointer(aPtr, bPtr) << endl; // 15
    cout << "a + b by ref -> reference: " << addByReference_reference(a, b) << endl; // 15
    
}
#include<iostream>
using namespace std;

// Pass argument by value (copy of original variables)
int addByValue(int x, int y){
    return x + y;
};

// Pass argument by reference using pointer variables
int addUsingPointers (int* x, int* y){
    return *x + *y;
};

// Pass arguments by reference using referance variables
int addUsingReference(int& x, int& y){
    return x + y;
};

int main(){
    int a = 5;
    int b = 10;
    int arr[] = {1,2,3,4,5};

    // Declare and initialize pointer variables
    int* aPtr = &a; // aPtr <-- address of a
    int* bPtr = &b; // bPtr <-- address of b
    int* arrPtr = arr; // arrays return address of first index

    cout << arr << endl;
    cout << arrPtr << endl;

    cout << "a + b by val: " << addByValue(a, b) << endl; // 15
    cout << "a + b by ref -> reference: " << addUsingReference(a, b) << endl; // 15

    cout << "a + b by ref -> pointer: " << addUsingPointers(aPtr, bPtr) << endl; // 15
    // OR
    cout << "a + b by ref -> pointer: " << addUsingPointers(&a, &b) << endl; // 15 | Can also pass the address directly without creating a pointer variable

}
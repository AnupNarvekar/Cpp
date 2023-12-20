#include<iostream>
using namespace std;

void incrementByVal(int num){
    ++num;
}

void incrementByPointerRef(int* num){
    ++*num;
}

void incrementByRef(int& num){
    ++num;
}

int main(){

    // Ponter basics
    int a = 5;
    int* aPtr = &a; // aPtr stores address of a

    // Refrances
    int& aRef = a;

    cout << "a: " << a << endl; // Value of a => 5
    cout << "&a: " << &a << endl; // Memory address of a => X [determined at runtime] 
    cout << "aPtr: " << aPtr << endl; // X 
    cout << "*aPtr: " << *aPtr << endl; // Derefrance aPtr => value of variable pointed by aPtr => 5
    cout << "&aPtr: " << &aPtr << endl; // Memory address of aPtr => Y [determined at runtime]


    // -------------------------------------------------------------------------------------------------


    // 'Pass by VALUE' vs 'Pass by REFERANCE'

    // Pass by value
    int n1 = 1;
    incrementByVal(n1);
    cout << "n1: " << n1 << endl;

    // Pass by referance (using pointer)
    int n2 = 9;
    incrementByPointerRef(&n2); // directly passing address of n2 instead of creating a pointer variable (int* n2Ptr = &n2)
    cout << "n2: " << n2 << endl;

    // Pass by referance (using refraance)
    int n3 = 40;
    incrementByRef(n3); // 
    cout << "n3: " << n3 << endl << endl;


    // --------------------------------------------------------------------------------------------------

    // Pointers and array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "arr: " << arr << endl;  // arrays return address of it's first index (arr[0])

    int* arrPtr = arr;  // store address of arr[0] in arrPtr
    cout << "arrPtr: " << arrPtr << endl;  // address of arrPtr
    cout << "*arrPtr: " << *arrPtr << endl << endl;  // value of arr[0]
    

    // Pointers and character
    // In C and C++, a string is represented as a null-terminated character array
    // which is essentially an array of characters where the end of the string
    // is marked by a special character called the null character ('\0').
    // The null character serves as a sentinel value, indicating the end of the string.

    char fName[] = {'a', 'n', 'u', 'p', '\0'};
    cout << "fName: " << fName << endl;  // "anup"
    cout << "*fName: " << *fName << endl;  // "a"

    char* fNamePtr = fName; // address of fName[0]
    cout << "fNamePtr: " << fNamePtr << endl; // "anup"
    cout << "*fNamePtr: " << *fNamePtr << endl << endl; // "a"


    // pointer and string
    string lName = "narvekar";
    string* lNamePtr = &lName; // address of lName

    cout << "lNamePtr: " << lNamePtr << endl; // Address of lName
    cout << "*lNamePtr: " << *lNamePtr << endl << endl; // value of lName through lNamePtr pointer

}
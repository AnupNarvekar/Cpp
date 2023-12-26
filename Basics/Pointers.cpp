#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

void incrementByVal(int num){
    ++num;
}

void incrementByPointerRef(int* num){
    ++*num;
}

// If the parameter is made a constant referance (const int& num), it ensures that
// the original value can't be updated via the referance variable num
void incrementByRef(int& num) { 
    ++num; 
}

int main(){

    // Ponter basics
    cout << "-------------------Pointer basics------------------------------" << endl;

    int a = 5;
    int* aPtr = &a; // aPtr stores address of a

    cout << "a: " << a << endl; // Value of a => 5
    cout << "&a: " << &a << endl; // Memory address of a => X [determined at runtime] 
    cout << "aPtr: " << aPtr << endl; // X 
    cout << "*aPtr: " << *aPtr << endl; // Derefrance aPtr => value of variable pointed by aPtr = 5
    cout << "&aPtr: " << &aPtr << endl; // Memory address of aPtr => Y [determined at runtime]

    cout << "---------------------------------------------------------------" << endl << endl;
    //-----------------------------------------------------------------------------------------------





    // Refrances
    cout << "-------------------Refrance basics------------------------------" << endl;

    int x = 2;
    int& xRef = x;

    cout << "x: " << x << endl; // 2
    cout << "xRef: " << xRef << endl; // 2

    xRef++;

    cout << "x: " << x << endl; // 3
    cout << "xRef: " << xRef << endl; // 3

    x++;

    cout << "x: " << x << endl; // 4
    cout << "xRef: " << xRef << endl; // 4

    cout << "---------------------------------------------------------------" << endl << endl;
    //-------------------------------------------------------------------------------------------------------------





    // r-value refrance
    cout << "-------------------r-value Refrance basics------------------------------" << endl;

    int y = 6;
    int&& z = y + 1; // z is a referance to "y + 1" (r-value) and not y

    cout << "y: " << y <<  endl; // 6
    cout << "z: " << z <<  endl; // 7

    y++;

    cout << "y: " << y << endl;  // 7
    cout << "z: " << z << endl;  // 7 - incrementing y has no effect on z since z is a referance to "y + 1" and not y

    cout << "------------------------------------------------------------------------" << endl << endl;
    // -------------------------------------------------------------------------------------------------





    // 'Pass by VALUE' vs 'Pass by REFERANCE'
    cout << "-------------------'Pass by VALUE' vs 'Pass by REFERANCE'--------------------------" << endl;

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
    cout << "n3: " << n3 << endl;

    cout << "------------------------------------------------------------------------" << endl << endl;
    // -----------------------------------------------------------------------------------------------





    // Pointers and array
    cout << "-------------------Pointers and array--------------------------" << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << "arr: " << arr << endl;  // arrays return address of it's first index (arr[0])

    int* arrPtr = arr;  // store address of arr[0] in arrPtr
    cout << "arrPtr: " << arrPtr << endl;  // address of arrPtr
    cout << "*arrPtr: " << *arrPtr << endl;  // value of arr[0]

    cout << "----------------------------------------------------------------" << endl << endl;
    // ---------------------------------------------------------------------------------------





    // Pointers and character
    cout << "-------------------Pointers and character--------------------------" << endl;

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

    cout << "----------------------------------------------------------------" << endl << endl;
    // -----------------------------------------------------------------------------------------





    // pointer and string
    cout << "-------------------Pointers and string--------------------------" << endl;

    string lName = "narvekar";
    string* lNamePtr = &lName; // address of lName

    cout << "lNamePtr: " << lNamePtr << endl; // Address of lName
    cout << "*lNamePtr: " << *lNamePtr << endl; // value of lName through lNamePtr pointer

    cout << "----------------------------------------------------------------" << endl << endl;
    // ----------------------------------------------------------------------------------------





    // Dot (.) vs ->
    cout << "------------------- Dot (.) vs -> --------------------------" << endl;

    Person p1 = {"anup", 24};
    cout << "p1.name: " << p1.name << "\tp1.age: " << p1.age << endl;

    Person* p1Ptr = &p1;
    cout << "(*p1Ptr).name: " << (*p1Ptr).name << "\t(*p1Ptr).name: " << (*p1Ptr).name << endl;
    // OR   (Both are same)
    cout << "p1Ptr->name: " << p1Ptr->name << "\tp1Ptr->age: " << p1Ptr->age << endl;

    cout << "----------------------------------------------------------------" << endl << endl;
    // ----------------------------------------------------------------------------------------


}
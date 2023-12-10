#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

void vectorBasics() {
    // definer a vector v1 and assign i some values
    vector<int> v1 = {1, 2, 3, 4, 5};

    // define iterator for vector
    vector<int>::iterator i;

    // print v1 using iterator
    for (i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";
    }

    cout << endl;

    // print v1 using foreach (intruduced in C++ 11)
    for (int val : v1) {
        cout << val << " ";
    }

    cout << endl;
}

void vectorCrud() {
    // 1. Create
    vector<int> v1;
    v1.assign(3, 7);  // {7,7,7}

    vector<int> v2 = {1, 2, 3};
    v2.push_back(19);  // {1,2,3,"19"}

    v2.insert(v2.begin(), 76);  // {"76",1,2,3,19}

    v2.insert(v2.end(), 23);  // {76,1,2,3,19,"23"}

    v2.insert(++v2.begin(), 32);  // {76,"32",1,2,3,19,23}

    v2.insert(v2.begin()++, 5);  // {"5",76,32,1,2,3,19,23}

    v2.insert(v2.end(), {12, 13, 14});  // {5,76,32,1,2,3,19,23,"12","13","14"}

    v2.emplace(v2.end(), 15);  // {5,76,32,1,2,3,19,23,12,13,14, "15"}

    v2.insert(v2.end(), v1.begin(),
              v1.end());  // {5,76,32,1,2,3,19,23,12,13,14,15,"7","7","7"}

    printVector(v2);
}

int main() {
    vectorBasics();
    vectorCrud();
}
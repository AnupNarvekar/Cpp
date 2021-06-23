#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void show(vector <int> v)
{
    vector <int> :: iterator itr;

    for (auto itr=v.begin(); itr<v.end(); itr++)
    {
        cout << *itr << "\t";
    }

    cout << "\n" << endl;    
}

int main()
{
    vector <int> v1 = {22, 7, 4, 32, 58, 39, 26, 34};
    show(v1);

    //Code to print vector elements without using iterator
    for (int i=0; i<v1.size(); i++)
    {
        cout << v1[i] << "\t"; 
    }

    cout << "\n" << endl; // just a line break

    v1.push_back(95);
    show(v1);

    cout << "Size: " << v1.size() << endl; 

    cout << "\ncapacity: " << v1.capacity() << endl;

    cout << "\n5th element is: " << v1[4] << endl; // usng referenct operator v[i]

    cout << "\n5th elemnt is: " << v1.at(4) << endl; //using at(i) method

    cout << "\n1st elemnt is: " << v1.front() << endl;

    cout << "\nLast elemnt is: " << v1.back() << endl;


    //Vector2

    vector <int> v2;

    v2.assign(5, 0);
    
    show(v2);

    cout << v2.size();



}
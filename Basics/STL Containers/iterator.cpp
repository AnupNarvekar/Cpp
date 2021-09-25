#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1 = {1,2,3,4,5}; // defining a vector

    vector <int> :: iterator itr; // defining a iterator for vector

    for(auto itr=v1.begin(); itr < v1.end(); itr++)
    {
        cout << *itr << "\t";
    }
    

}

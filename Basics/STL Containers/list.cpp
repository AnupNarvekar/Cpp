#include<iostream>
#include<list>
#include<iterator>
#include<time.h>

using namespace std;

int main()
{
    list <int> l1;

    list <int> :: iterator itr;

    // inserting 10 random numbers between 1 and 50 in list l1

    // Seeding ran()
    srand(time(0));

    for (int i=0; i<10; i++)
    {
        l1.push_back( rand()%50 + 1);
    }

    //printing list l1
    for(auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << "   ";
    }   


}
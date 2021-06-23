#include<iostream>
#include<deque>
#include<iterator>
#include<time.h>

using namespace std;

int main()
{

    deque <int> d1;

    deque <int> :: iterator itr;

    // inserting 10 random numbers between 1 and 50 in deque d1

    // Seeding ran()
    srand(time(0));

    for (int i=0; i<10; i++)
    {
        d1.push_back( rand()%50 + 1);
    }

    //printing deque d1
    for(auto itr = d1.begin(); itr != d1.end(); itr++)
    {
        cout << *itr << "   ";
    }   

}
#include<iostream>
#include<array>
#include<time.h>

using namespace std;

int main()
{
    array <int, 10> a1;

    //Adding 10 random integers to a1

    srand(time(0));

    for(int i=0; i <10; i++)
    {
        a1.at(i) = (rand()%50 + 1);
    }

    //Printing array
    for(int i =0; i < a1.size(); i++)
    {
        cout << a1[i] << "   ";
    }

}
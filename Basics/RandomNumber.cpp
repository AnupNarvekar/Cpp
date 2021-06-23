#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    srand(time(0));

    cout << "\nRandom Number: " << rand()%50 + 1 << "\n" << endl;
}
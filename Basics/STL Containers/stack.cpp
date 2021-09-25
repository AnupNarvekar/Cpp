#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> s1;

    s1.push(10);
    s1.push(92);
    s1.push(123);
    s1.push(33);
    s1.push(26);
    s1.push(84);

    cout << s1.size() << endl;

    while (s1.empty() == false)
    {
        cout << s1.top() << "   ";
        s1.pop();
    }

    
}

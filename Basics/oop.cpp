#include<iostream>
#include<String>

using namespace std;

class employee
{
    string fName;
    string lName;
    int eNum;

    public :
    void setName(string fn, string ln)
    {
        fName = fn, lName = ln;
    }

    void setEnum(int num)
    {
        eNum = num;
    }

    string getName()
    {
        return fName, lName;
    }

    int getEnum()
    {
        return eNum;
    }

    //Default constructor
    employee()
    {
        fName, lName = "UNKNOWN";
        eNum = -1;
    }  

};

int main()
{
    employee e1, e2;

    e1.setName("Anup", "Narvekar");
    e1.setEnum(48);

    cout << e1.getName() << endl;
    cout << e2.getName() << endl;

}
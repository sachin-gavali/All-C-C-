// write a program to calculate the marks in grade
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << " Enter the marks " << endl;
    cin >> marks;
    if (marks > 100)
    {
        cout << " Your marks is invlaid " << endl;
    }
    else if (marks > 80)
    {
        cout << "  YOUR GRADE  IS A +" << endl;
    }
    else if (marks > 70)
    {
        cout << "  YOUR GRADE  IS A " << endl;
    }
    else if (marks > 60)
    {
        cout << "  YOUR GRADE  IS B+ " << endl;
    }
    else if (marks > 50)
    {
        cout << "  YOUR GRADE  IS B " << endl;
    }
    else if (marks > 40)
    {
        cout << "  YOUR GRADE  IS C + " << endl;
    }
    else if (marks > 35)
    {
        cout << "  YOUR GRADE  IS C " << endl;
    }
    else if (marks < 35)
    {
        cout << "  YOU ARE FAIL IN EXAM " << endl;
    }
    else
    {
        cout << " YOUR MARKS IS INVAILD " << endl;
    }
    return 0;
}
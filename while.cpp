#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    while (n != 0)

    {
        if (n < 18)
        {
            cout << " no vote " << endl;
        }
        else
        {
            cout << "vote" << endl;
        }
    }
    return 0;
}
// print the number 1 to n in using while loop
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int n;
    cout << " ENTER THE NUMBER " << endl;
    cin >> n;

    while (a < n)
    {
        cout << " the value is = " << endl;
        
        cout << a << endl;
        a++;
    }
    return 0;
}
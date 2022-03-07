#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 18 && a < 100)
    {
        cout << " Your age is under 18 to 100 " << endl;
    }
    
    else if (a > 101 && a < 150)
    {
        cout << " your age is under 101 to150 " << endl;
    }
    
    else
    
    {
        cout << " age is vegali ahe " << endl;
    }
    return 0;
}
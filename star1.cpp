// star patterns
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << " Enter the number " << endl;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
       for (int j = 0 ; j<= i; j++)
       {
            cout << " * " << endl;
       }
    }
    return 0;
}
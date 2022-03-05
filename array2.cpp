#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int sum = 0;


    for (int i = 0; i <= 10; i++)
    {
        cin >> a[i];
        cout << a[i] << endl;
        sum = a[i] + sum ;
        cout<< " the value is = " << sum <<endl;
    }
    return 0;
}
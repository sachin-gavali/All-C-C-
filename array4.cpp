#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int sum = 0;

    for (int i = 0; i <= 5; i++)
    {
        cout << " enter the book prize " << endl;
        cin >> a[i];
        cout << " book prize " << a[i] << endl;
        sum = a[i] + sum;
        cout << " total prize is = " << sum << endl;
    }
    return 0;
}
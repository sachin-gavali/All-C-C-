#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        cin >> a[i];
        cout << " sachin " << endl;
        sum =  a[i] + sum;
        cout << a[i];
        sum++;
    }
    return 0;
}
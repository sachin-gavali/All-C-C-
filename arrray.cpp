// print the table of 2
#include <iostream>
using namespace std;
int main()
{
    int n[10];
    int table;
    int s;
    cout << " which table you have " << endl;
    cin >> s;
    for (int i = 0; i <= 10; i++)
    {
        table = i * s;
        cout << s << "*"
             << " " << i << "=" << table << endl;
    }
    return 0;
}
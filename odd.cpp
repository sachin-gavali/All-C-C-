// Write a progrm for number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number " << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << " THE NUMBER IS EVEN " << endl;
    }
   else  if (a == 0)
    {
        cout << "  THE NUMBER IS 0 " << endl;
    }
    else
    {
        cout << " THE NUMBER IS ODD  " << endl;
    }
    return 0;
}
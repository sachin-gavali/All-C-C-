// reference variable
#include <iostream>
using namespace std;
int main()
{

    int Number = 228;
    int &Nbr = Number;
    int sachin= 345;
    int &s= sachin ;
    cout << " Number = " << Number << endl;
    cout << " it's refernce  = " << Nbr << endl;
    cout << " sachin  " << sachin << endl;
    cout << " it's refernce  = " << s<< endl;
    return 0;
}

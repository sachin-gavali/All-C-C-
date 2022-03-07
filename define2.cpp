#include<iostream>
using namespace std;
#define pi 3.143 
int s()
int circle ( )
{
    int redius;
    cout << "ENTER THE NUMBER \n ";
    cin >> redius;
    int area = pi * redius * redius;
    cout << "area of circle is = "<< area << endl;
    return area;

}
int main ()
{
    cout << "\n  SACHIN     \n "<< endl;

    circle();
    s();
    return 0;

}
int s()
{
    int a ;
    cout << " ENTER A YOUR AGE  "<< endl;
    cin >> a;
    if (a<=18)
    {
        cout<< " you can't vote \n ";

    }
    else if (a<= 80 )
    {       
       cout << " you can vote \n";

        
    }
    else {
        cout << "your age is so high you can't vote \n";

    }
   return a; 
}
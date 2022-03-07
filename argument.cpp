#include <iostream>
#include <string>
using namespace std;
class School
{
private:
    int rollno[6];
    string name;
    int i;
    float sum = 0;
    int roll;


public:
    void getrollNo(void)
    {
        for( int i = 0 ; i< 6; i++ )
        cout  << " ENTER THE ROLL NO  \n "  << i+1 << endl;
        cin >> rollno[i];
        sum= sum+ rollno[i];
        cout<< sum;




    }
    void getname(void)
    {
        cout<< " ENTER THE CLASS NAME " << endl;
        cin >> name;
        cout<<  " ENTER THE ROLL NUMBER " << endl;
        cin>> roll;

    }
};
int main()
{
    School sachin;
    sachin.getname();
    sachin.getrollNo();
    return 0;
    
}
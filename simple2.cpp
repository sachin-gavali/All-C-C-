#include<iostream>
#define PI 3.143
using namespace std;
class circle 
{
    private : 
    float redius ;
    float area;
    public : 
    void getRedius()
    {
        cout << " ENTER THE REDIUS " << endl;
        cin >> redius;

    }
    void getArea()
    {
        area = PI * redius* redius ;
        cout << " THE AREA OF CIRCLE " << area << endl;

    }
    void show()
    {
        cout << " redius is =" << redius << endl;
    }
    
};
int main()
{
    circle c1;
    c1.getRedius();
    c1.show();
    c1.getArea();
    circle c2;
    c2.getRedius();
    c2.show();
    c2.getArea();
    circle c3;
    c3.getRedius();
    c3.show();
    c3.getArea();
    circle c4;
    c4.getRedius();
    c4.show();
    c4.getArea();
    circle c5;
    c5.getRedius();
    c5.show();
    c5.getArea();
    circle c6;
    c6.getRedius();
    c6.show();
    c6.getArea();
  
return 0;
}

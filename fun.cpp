#include<iostream>
using namespace std;
int sachin()
{
  int g,s,x;
    
    cout<<"ENTER A NUMBER \n ";
    cin >> g ;
    cout<<"ENTER A NUMBER \n ";
    cin >> s ;
    switch (g+s,g-s,g*s,g%s)
    {
     case (g+s):
        cout<<"sum of two number\n";
        break;
     case (g-s):
        cout<<"sub of two number\n";
        break;
     case  (g*s) :
        cout<<"multi of two number\n";
        break;
     case(g%s):
        cout<<"modulas of two number\n";
        break;
    
    default:
        break;
       return 0;
   
     }




}
int main ()
{
    int a,b,sum,sub,multi,mold;
    cout<<"ENTER THE A NUMBER  \n ";
    cin>> a ;
    cout << " ENTER THE A NUMBER\n";
    cin>>b;
    sum= a+b;
     sub=a-b;
     multi=a*b;
     mold=a%b;
 


     cout<<"\n sum of two number\n " <<sum;
     cout<<"\n subtracation of two number\n " <<sub;
     cout<<"\n multipicatoin of two number\n " <<multi;
     cout <<"\n modulas of two number \n "<<mold;
     sachin ();

   return 0;

    
}    
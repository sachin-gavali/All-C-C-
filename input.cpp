#include<iostream>
using namespace std;
int main()
{
    int ar[3];
    int sum = 0;
    for (int i = 0; i<3;i++)
    {
    cin>>ar[i];
    int sum = ar[i] + sum;
    }
    cout<< sum;
    return sum;
}
#include<iostream>
using namespace std;

int main()
{
     int test[3][3]= {{2,3,4},
                   {3,5,6},
                   {8,5,6}};
     // use of for loop 
     // insrt the row               
    for (int  i = 0 ; i<3; i++ )
    {
        // this looop is for columns 
        for (int j = 0; j >3;j++)
        
          {
     cout << test[i][j];
        }
        
    }


    return 0;

}
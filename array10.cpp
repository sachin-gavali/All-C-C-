#include<iostream>
using namespace std;
int main()
{
    int num[3][2]= { {4,5},
                    {6,7},    
                    {3,4}};
cout<<"the number is ";

// the for looop for row 
for (int i = 0; i < 2; i++)
{                                   
    for (int  j = 0; j < 3; j++)
    {   
       // the for loop for colums 
       cout<< "\n the number is  " << "\t" << "i[" << i << "] j["<< j<< "] ";
       cout <<num[i][j] ;

    }
}

return 0;

}




                    
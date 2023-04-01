#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int pm=4000;    
    //neha only go out in odd days
    for (int date=1; date<=30; date++)
    {
        if (date%2==0)
        {
            continue;
        }
        if (pm==0)
        {
            break;
        }
         pm=pm-300;
        cout<<"date "<<date<<" Neha is able to go out."<<endl;
        cout<<"remaining pocketmoney : "<<pm<<endl;
    
        
    }
     if (pm==0)
        {        
  cout<<"Now, neha is not able to go out because there pocket money is over."<<endl;
        }
    return 0;
}
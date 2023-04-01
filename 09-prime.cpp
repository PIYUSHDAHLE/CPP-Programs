//checking the no. is prime or not
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int i,n;
    cout<<"Enter the number :";
    cin>>n;
    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
          cout<<"Number is non prime"<<endl;
          break;
        } 
    }
        if (i==n)
          {
           cout<<"Number is prime";
          }
         if (1==n)
         {
           cout<<"Number is non prime";
         }
    
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    bool prime=1;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)//remender is = to 0 then its not prime
        {
            prime=0;
            break;
        }        
    }
    if (prime == 0 || n==1)
    {
        cout<<"it's not a prime number";
    }
    else    
    {
        cout<<"it's prime number ";
    }
    
    
    return 0;
}
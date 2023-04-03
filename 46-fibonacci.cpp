#include<iostream>
using namespace std;
int main()
{
    system("cls");
    long int n,a,b,x;
    cout<<"Enter the nth number of fibonacci series : ";
    cin>>n;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i < n; i++)
    {
        x=a+b;
        cout<<x<<" ";
        a=b;
        b=x;
    }
    
    return 0;
}

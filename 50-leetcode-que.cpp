#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int digit, n;
    int pro=1,sum=0,sub;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=0) //rem. zero
    {
        digit=n%10;
        pro=pro*digit;
        sum=sum+digit;
        n=n/10;        
    }
     sub=pro-sum;
     cout<<"Subtract the product and sum : "<<sub;
    
     return 0;
}
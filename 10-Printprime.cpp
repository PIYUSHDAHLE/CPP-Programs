//taking a and b 
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b;
    cout<<"Enter Number a :";
    cin>>a;
    cout<<"Enter Number b :";
    cin>>b;
 for(int n=a; n<=b; n++)
 {  
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            break;
        }
        if(i==n)
        {
            cout<<n<<endl;
        }               
    }
 }
    return 0;
}
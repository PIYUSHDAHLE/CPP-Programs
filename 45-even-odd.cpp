#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the nth number : ";
    cin>>n;
    if (n%2==0)
    {
    cout<<"The even number between 2 to "<<n<<" are ---"<<endl;
    for (int i = 2; i%2==0 && i<=n; i++)
    {
       cout<<i<<"  ";
       i++;        
    }   
    }
    else
    {
         cout<<"The odd number between 1 to "<<n<<" are ---"<<endl;
    for (int k = 1; k%2==1 && k<=n; k++)
    {
       cout<<k<<"  ";
       k++;        
    } 
    }
    
    return 0;
}


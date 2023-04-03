#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the nth number : ";
    cin>>n;
    cout<<"The odd number between 1 to "<<n<<" are ---"<<endl;
    for (int i = 1; i%2==1 && i<=n; i++)
    {
       cout<<i<<"  ";
       i++;        
    }   
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the nth number : ";
    cin>>n;
    cout<<"The even number between 2 to "<<n<<" are ---"<<endl;
    for (int i = 2; i%2==0 && i<=n; i++)
    {
       cout<<i<<"  ";
       i++;        
    }   
    return 0;
}


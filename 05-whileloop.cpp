#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number :";
    cin>>n;
    while (n>0)
    {
        cout<<n<<" is a positive number"<<endl;
        cout<<"Enter the number :";
        cin>>n;

    }
     cout<<n<<" is a negitive number"<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int i=1;
    while (i<=n)
    {    
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
// Enter the no. : 4
// 4321
// 4321
// 4321
// 4321
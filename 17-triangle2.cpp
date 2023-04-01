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
        while (j<=i)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
// Enter the no. : 6
// 1
// 12
// 123
// 1234
// 12345
// 123456
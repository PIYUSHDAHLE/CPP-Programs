
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
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;       
    }       
    return 0;
}
// Enter the no. : 4
// 1
// 22
// 333
// 4444
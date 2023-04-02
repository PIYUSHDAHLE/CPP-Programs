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
        while (j<=i-1)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=(n-i+1))
        {
            cout<<i;
            k++;
        }
        
        
        cout<<endl;
        i++;
    }
        
    return 0;
}
// Enter the no. : 4
// 1111
//  222
//   33
//    4
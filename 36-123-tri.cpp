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
        while (j<=(n-i))
        {
            cout<<" ";
            j++;
        }

        int k=1;
        while (k<=i)
        {
            cout<<i;
            k++;
        }
        i++;
        cout<<endl;       
    }       
    return 0;
}
// Enter the no. : 5
//     1
//    22
//   333
//  4444
// 55555
#include<iostream>
using namespace std;
int main()
{
system("cls");
int n,i=1;
cout<<"Enter the number :";
cin>>n;
while (i<=n)
{   int space=n-i;
    while (space)
    {
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while (j<=i)
    {
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}
// Enter the number :6
//      *
//     **
//    ***
//   ****
//  *****
// ******
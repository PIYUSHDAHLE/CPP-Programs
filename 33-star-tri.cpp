#include<iostream>
using namespace std;
int main()
{
system("cls");
int n,i=1;
cout<<"Enter the number :";
cin>>n;
while (i<=n)
{ 
 int star=n-i+1,j=1;
    while (j<=n)
    {   
      while (star)
      {
        cout<<"*";
        star=star-1;
      }
      
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}
// Enter the number :5
// *****
// ****
// ***
// **
// *
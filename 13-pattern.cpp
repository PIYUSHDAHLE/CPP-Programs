#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i=1;
    while (i<=n)
    {  int j=1;
       while (j<=n)
        { 
         cout<<i;  
         j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

}
// Enter the number : 6
// 111111
// 222222
// 333333
// 444444
// 555555
// 666666
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"ENTER THE N NUMBER :";
    cin>>n;
    int sum=0;
    for(int count=1;count<=n;count++)
    {
        sum=sum+count;
        cout<<sum<<" = "<<sum<<" + "<<count<<endl;

    }
    cout<<"sum of n number : "<<sum<<endl;
  //  return 0;
}
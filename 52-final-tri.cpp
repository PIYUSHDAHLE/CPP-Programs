#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n=1;
    cout<<"ehter the no. :";
    cin>>n;
    int i=1;
    while (i<=n)
    {   
        //1st triangle
        int j=1;
        while (j<=(n-i+1))
        {
            cout<<j;
            j=j+1;
        }
        //2nd triangle
        int k=1;
        while (k<i)
        {
            cout<<"*";
            k=k+1;
        }
        //3rd triangle
        int g=1;
        while (g<i)
        {
            cout<<"*";
            g=g+1;
        }
        //4th triangle
        int p=1;
        while (p<=(n-g+1))
        {
            cout<<n-p-g+2;
            p=p+1;
        }      
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}
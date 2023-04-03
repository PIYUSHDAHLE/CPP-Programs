#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i=1;
    cout<<"Enter No. : ";
    cin>>n;
    while (i<=n)
    {   
        //1st triangle   
        int j = n-i;
        while (j)
        {
            cout<<" ";
            j=j-1;
        }
        //2nd triangle
        int k=1;
        while (k<=i)
        {   
            cout<<k;
            k=k+1;
        }
        //3rd triangle
        int start=i-1;
        while (start)
        {   
            cout<<start;
            start=start-1;
        }
        
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
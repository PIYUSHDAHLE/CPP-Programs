#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int x;
    cout<<"Enter the value :";
    cin>>x;
    int row=1;
    int count=1;
    while (row<=x)
    {
        int col=1;
        while (col<=row)
        {
            cout<<count<<" ";
            count=count+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;    
}
// Enter the value :5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
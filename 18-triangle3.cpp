#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int row=1;
    while (row<=n)
    {   
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}
// Enter the no. : 6
// 1
// 22
// 333
// 4444
// 55555
// 666666
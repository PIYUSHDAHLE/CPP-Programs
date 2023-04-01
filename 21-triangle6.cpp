#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int row=1,count=1;
    while (row<=n)
    {   
        int col=1;
        while (col<=row)
        {  
            cout<<row-col+1;      
    
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}
// Enter the number :5
// 1
// 21
// 321
// 4321
// 54321
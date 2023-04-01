#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter number :";
    cin>>n;
    int i=1;
    
    while (i<=n)
    {    
        int j=1;
        while (j<=i)
        {   char c='A'+i+j-2;   
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }    
    return 0;
}
// Enter number :5
// A 
// B C 
// C D E 
// D E F G 
// E F G H I 

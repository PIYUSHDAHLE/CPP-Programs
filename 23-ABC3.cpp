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
        while (j<=n)
        {   char c='A'+j-1;
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
// Enter number :4
// A B C D 
// A B C D 
// A B C D 
// A B C D 
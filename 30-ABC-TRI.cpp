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
        {   char c='A'+i-j;   
            cout<<c<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }    
    return 0;
}

// A 
// B A 
// C B A 
// D C B A 
// E D C B A 
// F E D C B A 
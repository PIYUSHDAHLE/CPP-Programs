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
    {     //char c='A'+i-1; 
        int j=1;
        while (j<=n)
        {   char c='A'+i+j-2;   
            cout<<c<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }    
    return 0;
}
// Enter number :6
// A B C D E F 
// B C D E F G 
// C D E F G H 
// D E F G H I 
// E F G H I J 
// F G H I J K 

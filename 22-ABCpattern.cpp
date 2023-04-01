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
        {
            char ch;
            ch = ('A'+ i-1); 
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
// Enter number :5
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 
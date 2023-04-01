#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter number :";
    cin>>n;
    int i=1;
    char c='A'+i-1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {           
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
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 
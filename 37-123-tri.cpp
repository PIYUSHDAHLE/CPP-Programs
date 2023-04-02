#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=(n-i+1))
        {
            cout<<i;
            j++;
        }

        int k=1;
        while (k<=i)
        {
            cout<<" ";
            k++;
        }
        i++;
        cout<<endl;       
    }       
    return 0;
}
// Enter the no. : 5
// 11111 
// 2222  
// 333   
// 44    
// 5 

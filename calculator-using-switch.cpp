#include<iostream>
using namespace std;
int main()
{   
    system("cls");
    int a,b;
    char op;
    cout<<"enter the number a : ";
    cin>>a;
    cout<<"enter the number b : ";
    cin>>b;
    cout<<"enter the operation :";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        
        case '-':
        cout<<a-b<<endl;
        break;
        
        case '*':
        cout<<a*b<<endl;
        break;
        
        case '/':
        cout<<a/b<<endl;
        break;

        default :
        cout<<"not found";
        break;

    }
    return 0;
}

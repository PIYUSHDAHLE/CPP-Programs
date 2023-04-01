#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b;
    char op;
    cout<<"Enter the 2 numbers :";
    cin>>a>>b;
    cout<<"Enter the operation :";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"You enter Addition operation "<<endl;
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;

     case '-':
        cout<<"You enter Subtraction operation "<<endl;
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;

         case '*':
        cout<<"You enter Multiplication operation "<<endl;
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;

         case '/':
        cout<<"You enter Division operation "<<endl;
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;

    default:
    cout<<"This operation not found.... ";
        break;
    }      
    return 0;
}
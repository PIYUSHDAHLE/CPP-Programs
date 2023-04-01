#include<iostream>
using namespace std;
int main()
{
    system("cls");

    char x;

    cout<<"Enter the alphabet :";
    cin>>x;
    switch (x)
    {
    case 'a':
        cout<<"You enter a  "<<endl;
          break;

     case 'b':
        cout<<"You enter b "<<endl;
         break;

         case 'c':
        cout<<"You enter c "<<endl;
         break;

         case 'd':
        cout<<"You enter d "<<endl;
         break;

    default:
    cout<<"This alphabet not found in switch case.... ";
        break;
    }      
    return 0;
}
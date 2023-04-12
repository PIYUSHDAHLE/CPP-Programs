#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a=10, b=3;
    cout<<"a&b : "<<(a&b)<<endl;
    cout<<"a|b : "<<(a|b)<<endl;
    cout<<"~a : "<<(~a)<<endl;
    cout<<"a^b : "<<(a^b)<<endl;

    cout<<"Left Shift :"<<(15>>1)<<endl;
    cout<<"Left Shift :"<<(5>>2)<<endl;
    cout<<"Right Shift :"<<(19<<2)<<endl;
    cout<<"Right Shift :"<<(21<<3)<<endl;



    return 0;

}
// a&b : 2
// a|b : 11
// ~a : -11
// a^b : 9
// Left Shift :7
// Left Shift :1
// Right Shift :76
// Right Shift :168

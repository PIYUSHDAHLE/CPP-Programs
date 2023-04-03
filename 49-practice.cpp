#include<iostream>
using namespace std;
int main()
{
    system("cls");
    for (int j = 0; j <=20; j+=2)
    {   
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    for (int i = 0; i <=20; i+=2)
    {   
        cout<<i<<" ";
        if (i&1)
        {
            continue;
        }
        i++;
    }   
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    for (int n=1; n<=100; n++)
    {
        if (n%3==0)
        {
        continue;
        }
         cout<<n<<"\t ";
    }
         
    return 0;
}
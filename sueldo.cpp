#include<iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin>>a>>b;
    c=a-b;
    if(c>0)
    {
        cout<<"sueldo insufuciente";
    }
    else
    {
        cout<<c;
    }
    return(0);
}

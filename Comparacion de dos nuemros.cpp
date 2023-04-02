#include<iostream>
using namespace std;
int main()
{
    float n1, n2;
    cout<<"dame  el primer numero: \n";
    cin>>n1;
    cout<<"dame el segundo numero: \n";
    cin>>n2;
    if(n1 > n2)
    {
        cout<<" el primer numero es mayor al segundo numero \n";
    }
    if(n1 < n2)
    {
        cout<<"el segundo numero es mayor al primero \n";
    }
    else if (n1==n2)
    {
        cout<<"los dos numeros son iguales";
    }
    return(0);
}
